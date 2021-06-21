import pymysql

# 获取某个库下所有表
# select table_name from information_schema.tables where TABLE_SCHEMA='test'\G;
# 获取表下字段信息
# show full fields from tb_account
class conn_mysql(object):
    def __init__(self):
        self.conn = None
        self.cur = None

    def create_conn(self, host, user, passwd, db, port=3306, charset='utf8'):
        self.conn = pymysql.connect(host=host, user=user,
                                  passwd=passwd, db=db, port=port, charset=charset)
        self.cur = self.conn.cursor()

    def query(self, query):
        self.cur.execute(query)
        fields = self.cur.fetchall()
        return fields

    def close(self):
        self.cur.close()
        self.conn.close()

    def get_tables(self, db):
        sql = f'select table_name from information_schema.tables where TABLE_SCHEMA={db}'
        return self.query(sql)
        
    def get_fields(self, tb):
        sql = f'show full fields from {tb}'
        return self.query(sql)

    
try:

    # conn = pymysql.connect(host='127.0.0.1', user="root",
    #                    passwd="123456", db="test", port=3306, charset="utf8")
    # print('数据库连接成功!')
    # cur = conn.cursor()
    # cur.execute("show full fields from tb_account")
    # fields = cur.fetchall()
    # for field in fields:
    #     print(field)


    # cur.close()
    # conn.close()
    conn = conn_mysql()
    conn.create_conn('127.0.0.1', 'root', '123456', 'test')
    for field in conn.get_fields('tb_account'):
        print(field)

except pymysql.Error as e:
    print('数据库连接失败'+str(e))


