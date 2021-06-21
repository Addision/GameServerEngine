#pragma once
// gate 内部客户端
#include "engine/client_base.hpp"

class GateNetClient : public Engine::ClientBase
{
public:
	GateNetClient();
	~GateNetClient();

	virtual void init() override;
	virtual void clear() override;
	virtual void set_report_info() override;
	virtual void add_conn_server() override;
private:

};