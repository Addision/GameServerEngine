#include "GateServer.hpp"

int main(int argc, char* argv[])
{
	set_linux_core();
	GateServer* gate = GateServer::Instance();
	if (gate->start(argc, argv))
	{
		LogUtil::info("master server start...");
		gate->run();
	}

#ifdef _WIN
	system("pause");
#endif
	return 0;
}