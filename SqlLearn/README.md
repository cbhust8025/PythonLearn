# Python-SQLite3
> 利用python2.5之后内置的SQLite3库，我们可以直接```import sqlite3```来进行数据库操作。
> ```print help(sqlite3)```来显示sqlite3的帮助信息。

## 1、简介
* SQLite3 可使用 sqlite3 模块与 Python 进行集成。sqlite3 模块是由 Gerhard Haring 编写的。它提供了一个与 PEP 249 描述的 DB-API 2.0 规范兼容的 SQL 接口。 Python 2.5.x 以上版本默认自带了该模块。   
* SQLite，是一款轻型的数据库，是遵守ACID的关系型数据库管理系统，它包含在一个相对小的C库中。它是D.RichardHipp建立的公有领域项目。它的设计目标是嵌入式的，而且目前已经在很多嵌入式产品中使用了它，它占用资源非常的低，在嵌入式设备中，可能只需要几百K的内存就够了。它能够支持Windows/Linux/Unix等等主流的操作系统，同时能够跟很多程序语言相结合，比如 Tcl、C#、PHP、Java等，还有ODBC接口，同样比起Mysql、PostgreSQL这两款开源的世界著名数据库管理系统来讲，它的处理速度比他们都快。
* 详细介绍可见：[SQLite3](https://github.com/cbhust8025/C-Learn/tree/master/Sqlite3)

## 2、使用
> 开发环境：Python2.7.11 + Pycharm2016.1 + win10
### 1、下载
python2.5.x以上版本默认自带sqlite3模块，下载Python即可import

### 3、接口
> 参考:[菜鸟教程](http://www.runoob.com/sqlite/sqlite-python.html)
* sqlite3.connect()
```
  connect(...)
      connect(database[, timeout, isolation_level, detect_types, factory])

      Opens a connection to the SQLite database file *database*. You can use
      ":memory:" to open a database connection to a database that resides in
      RAM instead of on disk.
```
>*  connect函数打开一个到SQLite数据库文件（.db）database的链接。可以向database参数传入```":memory:"```来打开一个创建在RAM的数据库链接。
如果数据库成功打开，则返回一个链接对象。
>* 当一个数据库被多个链接访问，且其中一个修改了数据库，此时SQLite数据库被锁定，直到事务提交。timeout参数表示链接等待锁定的持续时间，直到发生异常断开链接。timeout参数默认是5.0(5秒)。

* 数据库链接对象类Connection
```C++
    class Connection(__builtin__.object)
     |  SQLite database connection object.
```
>* 数据库链接对象类是调用connect函数成功链接一个数据库返回的对象类型。
>* 其自身具有一些常用方法：
>>* close()方法：关闭此数据库链接
```C++
     |  close(...)
     |      Closes the connection.
```

>>* commit()方法：如果数据库打开时未设置```isolation_level=None```，则对于数据库传入SQL语句之后需要调用此函数才能实现对数据库的操作，不然传入的SQL语句无效。对于事务流数据库操作，一般用commit来进行操作和回滚。如果未调用该方法，那么自您上一次调用 commit() 以来所做的任何动作对其他数据库连接来说是不可见的。
```C++
     |  commit(...)
     |      Commit the current transaction.
```

>>* cursor()方法：返回一个指向数据库的指针类型--一般用于调用其```execute```方法来传入SQL操作。该方法接受一个单一的可选的参数 cursorClass。如果提供了该参数，则它必须是一个扩展自 sqlite3.Cursor 的自定义的 cursor 类。
```C++
     |  cursor(...)
     |      Return a cursor for the connection.
```

>>* execute()方法：实质上是调用Connect对象的cursor方法后，使用返回的cursor指针来调用Cursor类的execute方法，所以详情见Cursor类的execute方法。

>>* rollback()方法：进行事务回滚，如果当前事务未正常进行完毕。
```C++
     |  rollback(...)
     |      Roll back the current transaction.
```

* 数据库指针类Cursor
```C++
    class Cursor(__builtin__.object)
     |  SQLite database cursor class.
```
>* 调用数据库链接对象的cursor方法来生成的数据库指针类型的对象，用于对数据库数据的一些操作。
>* 自身的一些常用方法：
>>* execute()方法：使用的最多，执行一个SQL语句，该SQL语句可以被参数化（即使用占位符代替SQL文本）。sqlite3模块支持两种类型的占位符：问号和命名占位符（命名样式），命名占位符类似：```%s --> string```这样。其他的execute系列方法类似。
```C++
     |  execute(...)
     |      Executes a SQL statement.
     |  executemany(...)
     |      Repeatedly executes a SQL statement.
     |  
     |  executescript(...)
     |      Executes a multiple SQL statements at once. Non-standard.
```
>>> 问号占位符：
```Python 
cursor.execute("insert into people values (?, ?)", (who, age))
```

>>* close()方法：关闭此指针。
```C++
     |  close(...)
     |      Closes the cursor.
```

>>* fetch系列方法：获取查询结果，也就是当前数据库指针指向的地方的后面一部分值。
>>>* fetchone():该方法获取查询结果集中的下一行，返回一个单一的序列，当没有更多可用的数据时，则返回 None。
>>>* fetchmany():该方法获取查询结果集中的下一行组，返回一个列表。当没有更多的可用的行时，则返回一个空的列表。该方法尝试获取由 size 参数指定的尽可能多的行。
>>>* fetchall()：该例程获取查询结果集中所有（剩余）的行，返回一个列表。当没有可用的行时，则返回一个空的列表。
```
     |  fetchall(...)
     |      Fetches all rows from the resultset.
     |  
     |  fetchmany(...)
     	      fetchmany([size=cursor.arraysize])
     |          Fetches several rows from the resultset.
     |  
     |  fetchone(...)
     |      Fetches one row from the resultset.
```

>>* rollback()方法：回滚上一次调用commit()以来对数据库所做的更改。

>>* executescript()方法：执行多个SQL语句，首先执行commit语句，再执行作为参数传入的SQL脚本（以分号分隔）。

* 数据库操作
>* 创建表
```Pyhthon
conn.execute('''CREATE TABLE COMPANY
       (ID INT PRIMARY KEY     NOT NULL,
       NAME           TEXT    NOT NULL,
       AGE            INT     NOT NULL,
       ADDRESS        CHAR(50),
       SALARY         REAL);''')
```

>* Insert操作
```Python
#!/usr/bin/python

import sqlite3

conn = sqlite3.connect('test.db')
print "Opened database successfully";

conn.execute("INSERT INTO COMPANY (ID,NAME,AGE,ADDRESS,SALARY) \
      VALUES (1, 'Paul', 32, 'California', 20000.00 )");

conn.execute("INSERT INTO COMPANY (ID,NAME,AGE,ADDRESS,SALARY) \
      VALUES (2, 'Allen', 25, 'Texas', 15000.00 )");

conn.execute("INSERT INTO COMPANY (ID,NAME,AGE,ADDRESS,SALARY) \
      VALUES (3, 'Teddy', 23, 'Norway', 20000.00 )");

conn.execute("INSERT INTO COMPANY (ID,NAME,AGE,ADDRESS,SALARY) \
      VALUES (4, 'Mark', 25, 'Rich-Mond ', 65000.00 )");

conn.commit()
print "Records created successfully";
conn.close()
```

>* Select操作：
```Python
#!/usr/bin/python

import sqlite3

conn = sqlite3.connect('test.db')
print "Opened database successfully";

cursor = conn.execute("SELECT id, name, address, salary  from COMPANY")
for row in cursor:
   print "ID = ", row[0]
   print "NAME = ", row[1]
   print "ADDRESS = ", row[2]
   print "SALARY = ", row[3], "\n"

print "Operation done successfully";
conn.close()
```

>* Update操作：
```Python
#!/usr/bin/python

import sqlite3

conn = sqlite3.connect('test.db')
print "Opened database successfully";

conn.execute("UPDATE COMPANY set SALARY = 25000.00 where ID=1")
conn.commit()
print "Total number of rows updated :", conn.total_changes

cursor = conn.execute("SELECT id, name, address, salary  from COMPANY")
for row in cursor:
   print "ID = ", row[0]
   print "NAME = ", row[1]
   print "ADDRESS = ", row[2]
   print "SALARY = ", row[3], "\n"

print "Operation done successfully";
conn.close()
```

>* Delete操作：
```Python
#!/usr/bin/python

import sqlite3

conn = sqlite3.connect('test.db')
print "Opened database successfully";

conn.execute("DELETE from COMPANY where ID=2;")
conn.commit()
print "Total number of rows deleted :", conn.total_changes

cursor = conn.execute("SELECT id, name, address, salary  from COMPANY")
for row in cursor:
   print "ID = ", row[0]
   print "NAME = ", row[1]
   print "ADDRESS = ", row[2]
   print "SALARY = ", row[3], "\n"

print "Operation done successfully";
conn.close()
```
