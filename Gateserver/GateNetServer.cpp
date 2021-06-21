#include "GateNetServer.hpp"

#include "engine/node_net.hpp"
#include "engine/net_session.hpp"
#include "common/CommonDefines.hpp"

GateNetServer::GateNetServer()
{
}

GateNetServer::~GateNetServer()
{
}

void GateNetServer::init()
{
	ServerBase::base_init();
	// add recv callback
	m_server_net.add_recv_cb(this, &GateNetServer::OnOtherMessage);
	m_server_net.add_recv_cb(LOGIN_ROUTE_TO_GATE, this, &GateNetServer::OnLoginRouteGate);

}

void GateNetServer::clear()
{
	m_clients.clear();
	m_server_net.stop();
}

void GateNetServer::OnOtherMessage(Session* session, IBuffer* buffer, int msg_id, int msg_len)
{
	LogUtil::debug("get net server recv msg from socket:%d", session->get_fd());
}

void GateNetServer::OnLoginRouteGate(Session* session, IBuffer* buffer, int msg_id, int msg_len)
{
	//LoginToGatePacket login_packet;
	ON_HANDLER(session, LoginToGatePacket, buffer);
	uint64 playerId = kLoginToGatePacket.player_id();
	//if (msg == nullptr || !(login_packet.ParseFromArray(msg, msg_len))) return;

	//uint64_t playerId = login_packet.player_id();
	//ClientPlayer* pPlayer = g_pClientPlayerMgr->GetPlayerByID(playerId);
	//if (pPlayer == nullptr) return;

	//socket_t player_fd = pPlayer->GetSockFd();
	//if (player_fd == -1) return;

	//g_pServerThread->PlayerServer().SendToClient(player_fd, login_packet.msg_id(), &login_packet);

	LogUtil::info("OnLoginRouteGate and sent to client, msg_id:%d", msg_id);

}


