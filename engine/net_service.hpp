#pragma once
#include "net_defines.hpp"
#include "msg_dispatcher.hpp"

namespace Engine
{
	using namespace std::placeholders;
	// 网络服务接口
	class IBuffer;
	class IOService;
	class Session;
	class INetService;

	using recv_handler_t = void(Session* session, IBuffer* buffer, int msg_id, int msg_len);
	using event_handler_t = void(const fd_t& sock_fd, const NetEventType net_event, INetService* net_service);
	using recv_functor = std::function<recv_handler_t>;
	using recv_functor_ptr = std::shared_ptr<recv_functor>;
	using event_functor = std::function<event_handler_t>;
	using event_functor_ptr = std::shared_ptr<event_functor>;

	class INetService
	{
		friend class Session;
	public:
		virtual bool start(const char* host, uint32_t port) { return true; }
		virtual void stop() {}
		virtual Session* get_session(const fd_t& fd) { return nullptr; }
		virtual void close_session(Session* session, SessionCloseType reason) {}
		virtual bool process_accept(IO_DATA* data, sockaddr* addr, Session** session) { return true; }

		void set_cb(recv_functor& recv_cb, event_functor& event_cb)
		{
			m_recv_cb = recv_cb;
			m_event_cb = event_cb;
		}
		template<class BaseType>
		void set_cb(BaseType* base_type, void(BaseType::*recv_handler)(Session* session, IBuffer* buffer, int msg_id, int msg_len), void(BaseType::*event_handler)(const fd_t& sock_fd, const NetEventType net_event, INetService* net_base))
		{
			m_recv_cb = std::bind(recv_handler, base_type, _1, _2, _3, _4);
			m_event_cb = std::bind(event_handler, base_type, _1, _2, _3);
		}
		IOService* get_io_service() { return m_io_service; }
		void set_io_service(IOService* io_service) { m_io_service = io_service; }
	protected:
		void net_init();
		void net_free();
	protected:
		IOService* m_io_service{nullptr};

		recv_functor m_recv_cb;
		event_functor m_event_cb;

		diaspatcher_t<func_t> m_dispatcher;
	};
}
