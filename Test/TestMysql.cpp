#include "GameTest.hpp"
#include "engine/db_mysql.hpp"
#include "engine/engine_defines.hpp"

#include "mariacpp/connection.hpp"
#include "mariacpp/lib.hpp"
#include "mariacpp/resultset.hpp"
#include "mariacpp/prepared_stmt.hpp"
//
using namespace Engine;

void GameTest::TestMysql()
{
	MySql::init("root", "123456", "test", "127.0.0.1", 3306, 20);

	DB_MYSQL_BEGIN();
	DB_MYSQL_QUERY("select * from tb_account");
	while (res && res->next())
	{
		std::cout << res->getInt64(0) << std::endl;
		std::cout << res->getString(2) << std::endl;
	}
	DB_MYSQL_END();


}