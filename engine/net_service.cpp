#include "net_service.hpp"
#include "net_session.hpp"
#include "mem_stream_buffer.hpp"
#include "msg_defines.hpp"

namespace Engine
{

	void INetService::net_init()
	{
#ifdef _WIN
		WORD sockVersion = MAKEWORD(2, 2);
		WSADATA data;
		if (WSAStartup(sockVersion, &data) != 0)
		{
			LogUtil::fatal(EngineErrs::E_NET, "net work init error!");
		}
		if (HIBYTE(data.wVersion) != 2 || LOBYTE(data.wVersion) != 2)
		{
			WSACleanup();
			LogUtil::fatal(EngineErrs::E_NET, "net work init error (Version != 2.2)!");
		}
#endif

	}

	void INetService::net_free()
	{
#ifdef _WIN
		WSACleanup();
#endif

	}

}
