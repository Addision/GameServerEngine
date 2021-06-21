#pragma once
// gate 内部服务器端
#include "engine/server_base.hpp"

using namespace Engine;
class GateNetServer : public ServerBase
{
public:
	GateNetServer();
	~GateNetServer();
	virtual void init() override;
	virtual void clear() override;

	void OnOtherMessage(Session* session, IBuffer* buffer, int msg_id, int msg_len);
	void OnLoginRouteGate(Session* session, IBuffer* buffer, int msg_id, int msg_len);
private:
	
};