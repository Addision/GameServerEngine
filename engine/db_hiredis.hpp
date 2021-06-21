#pragma once

#include "com_singleton.hpp"
#include "logger.hpp"
#include "hiredis/hiredis.h"
#include <deque>

namespace Engine
{
	enum class redis_dsn
	{
		game,
		log,
	};
	enum class redis_err
	{
		unknow_dsn,
		duplicate_dsn,
		bad_param,
		conn_fail,
	};
	class Redis;
	namespace hiredis
	{
		template<redis_dsn dsn>
		class ConnPool : public Singleton<ConnPool<dsn>>
		{
		public:
			~ConnPool() { clear(); }
			friend class Redis;
			template<redis_dsn> friend class AutoConnect;
		private:
			void init(const char* server, unsigned int port, size_t size)
			{
				std::lock_guard<std::mutex> lock(m_mutex);
				if (m_bInit)
					LogUtil::fatal(redis_err::duplicate_dsn, "hiredis: init dsn(%d) duplicate", dsn);
				m_bInit = true;
				m_server = server;
				m_port = port;
				redisContext* ctx = nullptr;
				for (int i = 0; i < size; ++i)
				{
					ctx = redisConnect(server, m_port);
					if (ctx == nullptr)
						LogUtil::fatal(redis_err::conn_fail, "hiredis: connect redis fail");
					redisEnableKeepAlive(ctx);
					m_pool.emplace_back(ctx);
				}
			}
			redisContext* malloc()
			{
				std::lock_guard<std::mutex> lock(m_mutex);
				if (!m_bInit)
				{
					LogUtil::fatal(redis_err::unknow_dsn, "hiredis: unknow_dsn(%d) or not init", dsn);
				}
				redisContext* ctx = nullptr;
				if (m_pool.empty())
				{
					ctx = redisConnect(m_server.c_str(), m_port);
					if (ctx == nullptr)
					{
						LogUtil::fatal(redis_err::conn_fail, "hiredis: connect redis fail");
					}
					redisEnableKeepAlive(ctx);
					return ctx;
				}

				ctx = m_pool.front();
				m_pool.pop_front();

				redisReply* reply = reinterpret_cast<redisReply*>(redisCommand(ctx, "PING"));
				if (reply == nullptr || reply->type == REDIS_REPLY_ERROR || strcmp(reply->str, "PONG") != 0)
				{
					freeReplyObject(reply);
					if (redisReconnect(ctx) == REDIS_OK)
					{
						redisEnableKeepAlive(ctx);
						return ctx;
					}
					LogUtil::fatal(redis_err::conn_fail, "hiredis: connect redis error");
				}

				freeReplyObject(reply);
				return ctx;
			}
			void free(redisContext* ctx)
			{
				std::lock_guard<std::mutex> lock(m_mutex);
				m_pool.emplace_back(ctx);
			}
			void clear()
			{
				std::lock_guard<std::mutex> lock(m_mutex);
				for (auto it=m_pool.begin(); it!=m_pool.end(); it++)
				{
					redisFree(*it);
				}
				m_pool.clear();
			}
		private:
			unsigned int m_port{0};
			std::string m_server;
			bool m_bInit{false};
			std::deque<redisContext*> m_pool;
			std::mutex m_mutex;
		};

		template<redis_dsn dsn>
		class AutoConnect
		{
		public:
			AutoConnect(redisContext* ctx):m_ctx(ctx) {}
			~AutoConnect() 
			{ 
				if (m_ctx) { ConnPool<dsn>::Instance()->free(m_ctx); }
			}
			redisContext* get_ctx() { return m_ctx; }
		private:
			redisContext* m_ctx{ nullptr };
		};
	} // namespace hiredis
/////////////////////////////////////////////////////////////////////////////////////////////
	class Redis : public NonCopyable
	{
	public:
		template<redis_dsn dsn>
		static void init(const char* server, unsigned int port = 6379, size_t size = 1)
		{
			if (!server)
			{
				LogUtil::fatal(redis_err::bad_param, "hiredis: init dsn(%d) param error", dsn);
			}

			hiredis::ConnPool<dsn>::Instance()->init(server, port, size);
		}

		template<redis_dsn dsn>
		static hiredis::AutoConnect<dsn> get_conn()
		{
			return { hiredis::ConnPool<dsn>::Instance()->malloc() };
		}
	};
//////////////////////////////////////////////////////////////////////////////////////////////
} // namespace engine

#define DB_REDIS_BEGIN(DSN) \
try \
{	\
	auto redis_conn = Engine::Redis::get_conn<DSN>();

#define DB_REDIS_END() \
}	\
catch (std::exception& e)	\
{	\
	Engine::LogUtil::fatal(e.what());	\
}

#define DB_REDIS_QUERY(reply, sql) \
	reply = reinterpret_cast<redisReply*>(redisCommand(redis_conn.get_ctx(), sql));

#define DB_REDIS_FREE_REPLY(reply) \
	freeReplyObject(reply);
