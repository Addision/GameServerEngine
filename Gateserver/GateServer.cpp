#include "GateServer.hpp"
#include "engine/com_util.hpp"
#include "common/JsonConfig.hpp"
#include "common/LogSystem.hpp"

bool GateServer::OnStart()
{
	try
	{
		CreateLogSystem();
		Init();
		StartNetWork();

	}
	catch (std::exception& e)
	{
		LogUtil::error("start master error, %s", e.what());
		return false;
	}
	return true;
}

void GateServer::OnQuit()
{
	m_gate_server.clear();
}

void GateServer::Init()
{
	LoadConfig();
	m_gate_server.init();
	m_gate_client.init();
	m_gate_player.init();
}

void GateServer::StartNetWork()
{
	// start gate server net
	std::string gate_ip = m_json->m_kGateConf["ip"].asString();
	unsigned int gate_port = m_json->m_kGateConf["port"].asUInt();
	bool bRet = m_gate_server.get_net()->create_server_service(gate_ip, gate_port);
	if (bRet)
		m_gate_server.execute();
	else
		throw std::runtime_error("start gate Server Net error");

	// start gate player net
	std::string gate_player_ip = m_json->m_kGateConf["ip"].asString();
	unsigned int gate_player_port = m_json->m_kGateConf["port"].asUInt();
	bRet = m_gate_server.get_net()->create_server_service(gate_player_ip, gate_player_port);
	if (bRet)
		m_gate_player.execute();
	else
		throw std::runtime_error("start gate player Net error");

	// start gate client net
	m_gate_client.execute();
}

void GateServer::StopNetWork()
{
	m_gate_server.clear();
}

void GateServer::LoadConfig()
{
	m_json = JsonConfig::Instance();
	if (m_json->Load(SERVER_CONF))
	{
		m_json->m_kMasterConf = m_json->m_root["MasterServer"];
		m_json->m_kGateConf = m_json->m_root["GateServer"];
	}
	else
	{
		throw std::runtime_error("load config err, can't find server config file");
	}
}

void GateServer::CreateLogSystem()
{
	SysLog* pSysLog = SysLog::Instance();
	LogUtil::set_log(pSysLog);
	pSysLog->Start(LogLevel::DEBUG);
}

void GateServer::DestroyLogSystem()
{
	SysLog::Instance()->Stop();
}

void GateServer::CreateService()
{

}

void GateServer::DestroyService()
{

}

