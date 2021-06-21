#include "GateNetClient.hpp"

#include "common/JsonConfig.hpp"

GateNetClient::GateNetClient()
{

}

GateNetClient::~GateNetClient()
{
}

void GateNetClient::init()
{
	set_report_info();
	add_conn_server();
}

void GateNetClient::clear()
{
}

void GateNetClient::set_report_info()
{
	auto gate_config = JsonConfig::Instance()->m_kGateConf;
	m_server_info.set_server_id(gate_config["NodeId"].asInt());
	m_server_info.set_server_name(gate_config["NodeName"].asString());
	m_server_info.set_server_cur_count(0);
	m_server_info.set_server_ip(gate_config["NodeIp"].asString());
	m_server_info.set_server_port(gate_config["NodePort"].asInt());
	m_server_info.set_server_max_online(2000);
	m_server_info.set_server_state(EServerState::EST_NORMAL);
	m_server_info.set_server_type(ServerType::SERVER_GATE);
}

void GateNetClient::add_conn_server()
{
	add_conn_master();
}
