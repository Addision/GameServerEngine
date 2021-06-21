#pragma once
#include "com_singleton.hpp"
#include "mem_data_factory.hpp"
#include "logger.hpp"

#include "mariacpp/connection.hpp"
#include "mariacpp/lib.hpp"
#include "mariacpp/resultset.hpp"
#include "mariacpp/prepared_stmt.hpp"

#include <deque>
#include <mutex>
#include <functional>

namespace Engine
{
	enum class mysql_err
	{
		init_conn,
		unknow_dsn,
		duplicate_dsn,
		bad_param,
		conn_fail,
	};

	namespace mysqlpp
	{
		class ConnPool : public Singleton<ConnPool>
		{
		public:
			~ConnPool()
			{
				clear();
			}
		public:
			void init(const char* user, const char* pwd, const char* dbname, const char* server, unsigned int port, size_t size)
			{
				m_user = user ? user : "";
				m_pwd = pwd ? pwd : "";
				m_dbname = dbname ? dbname : "";
				m_server = server ? server : "";
				m_port = port;

				MariaCpp::Connection* conn_ptr = nullptr;
				for (int i = 0; i < size; i++)
				{
					conn_ptr = new MariaCpp::Connection();
					if (!conn_ptr)
					{
						LogUtil::fatal(mysql_err::init_conn, "mysqlpp: init conn error");
					}
					if (!conn_ptr->connect(m_server.c_str(), m_user.c_str(), m_pwd.c_str(), m_dbname.c_str(), m_port, nullptr, 1))
					{
						LogUtil::fatal(mysql_err::init_conn, "mysqlpp: init conn error");
					}
					m_pool.emplace_back(conn_ptr);
				}
			}
			MariaCpp::Connection* malloc()
			{
				std::lock_guard<std::mutex> lock(m_mutex);
				MariaCpp::Connection* conn_ptr = nullptr;
				if (m_pool.empty())
				{
					conn_ptr = new MariaCpp::Connection();
					if (!conn_ptr)
					{
						LogUtil::fatal(mysql_err::init_conn, "mysqlpp: init conn error");
					}
					if (!conn_ptr->connect(m_server.c_str(), m_user.c_str(), m_pwd.c_str(), m_dbname.c_str(), m_port, nullptr, 1))
					{
						LogUtil::fatal(mysql_err::init_conn, "mysqlpp: init conn error");
					}
					return conn_ptr;
				}

				conn_ptr = m_pool.front();
				m_pool.pop_front();

				if (conn_ptr->MyPing() != 0)
				{
					if (!conn_ptr->connect(m_server.c_str(), m_user.c_str(), m_pwd.c_str(), m_dbname.c_str(), m_port, nullptr, 1))
					{
						LogUtil::fatal(mysql_err::init_conn, "mysqlpp: init conn error");
					}
				}
				return conn_ptr;
			}
			void free(MariaCpp::Connection* conn)
			{
				std::lock_guard<std::mutex> lock(m_mutex);
				m_pool.emplace_back(conn);
			}
		
			void clear()
			{
				for (auto& it : m_pool)
				{
					it->close();
					delete it;
				}
				m_pool.clear();
			}
		private:
			std::deque<MariaCpp::Connection*> m_pool;
			std::string m_dbname;
			std::string m_user;
			std::string m_pwd;
			std::string m_server;
			unsigned int m_port{3306};

			std::mutex m_mutex;
		};

		struct release_conn
		{
			release_conn(ConnPool* pool) :m_pool(pool) {}
			~release_conn() {}
			void operator()(MariaCpp::Connection* p)
			{
				if (p) m_pool->free(p);
			}
			ConnPool* m_pool{nullptr};
		};
	} // nemespace mysqlpp
////////////////////////////////////////////////////////////////////////////////////////////////////
	using result_t = std::shared_ptr<MariaCpp::ResultSet>;
	using prepared_stmt_t = std::shared_ptr<MariaCpp::PreparedStatement>;

	class MySql : public NonCopyable
	{
	public:
		static void init(const char* user, const char* pwd, const char* dbname, const char* server, unsigned int port, size_t size)
		{
			auto conn_pool = mysqlpp::ConnPool::Instance();
			conn_pool->init(user, pwd, dbname, server, port, size);
		}

		static std::unique_ptr<MariaCpp::Connection, mysqlpp::release_conn> get_conn()
		{
			auto conn_pool = mysqlpp::ConnPool::Instance();
			return std::unique_ptr<MariaCpp::Connection, mysqlpp::release_conn>(conn_pool->malloc(), mysqlpp::release_conn(conn_pool));
		}

	};
} // namespace engine
/////////////////////////////////////////////////////////////////////////////////////////

#define DB_MYSQL_BEGIN() \
try \
{	\
	auto mysql_conn = Engine::MySql::get_conn();

#define DB_MYSQL_END() \
}	\
catch (std::exception& e)	\
{	\
	Engine::LogUtil::fatal(e.what());	\
}

#define DB_MYSQL_QUERY(sql) \
	mysql_conn->query(sql); \
	MariaCpp::ResultSet* res = mysql_conn->store_result();
