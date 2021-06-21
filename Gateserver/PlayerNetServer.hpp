#pragma once
// 玩家连接gate服务器
#include "engine/server_base.hpp"

class PlayerNetServer : public Engine::ServerBase
{
public:
	PlayerNetServer();
	~PlayerNetServer();
	virtual void init() override;
	virtual void clear() override;
private:

private:
};