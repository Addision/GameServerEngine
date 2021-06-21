#pragma once
#include "common/CommonDefines.hpp"
#include "engine/application.hpp"
#include "engine/com_singleton.hpp"
#include "engine/com_util.hpp"

#include "GateServer/GateNetServer.hpp"
#include "GateServer/GateNetClient.hpp"
#include "GateServer/PlayerNetServer.hpp"
#ifdef _WIN
#include "engine/io_iocp.hpp"	
#else
#include "engine/io_epoll.hpp"
#endif


class JsonConfig;
class GateServer : public Application, public Singleton<GateServer>
{
public:
	virtual bool OnStart();
	virtual void OnQuit();
private:
	void Init();
	// ��������
	void LoadConfig();
	// ��־
	void CreateLogSystem();
	void DestroyLogSystem();

	// �������
	void StartNetWork();
	void StopNetWork();

	// �߼�����
	void CreateService();
	void DestroyService();

private:
	GateNetServer m_gate_server;
	GateNetClient m_gate_client;
	PlayerNetServer m_gate_player;
	JsonConfig* m_json{ nullptr };
};