#include "GameTest.hpp"
#include "engine/db_hiredis.hpp"
#include "engine/engine_defines.hpp"

//
using namespace Engine;

void GameTest::TestRedis()
{
	enum class dns
	{
		game = 1,
	};
	Redis::init<redis_dsn::game>("192.168.43.47");

	DB_REDIS_BEGIN(redis_dsn::game);
	redisReply* reply = nullptr;
	DB_REDIS_QUERY(reply, "set key 123");
	DB_REDIS_QUERY(reply, "get key");
	std::cout << reply->str << std::endl;
	DB_REDIS_FREE_REPLY(reply);
	DB_REDIS_END();
}
