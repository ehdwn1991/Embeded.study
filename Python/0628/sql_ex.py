#SQL 예제
import sqlite3
person =[("Hugo","Boss"),("adi","das")]

con=sqlite3.connect(":memory:") #직접 메모리에 접근해서 저장 하는 형태이다. 파일로 따로 만들 필요도 없다.
# con=sqlite3.connect("log") #이렇게 해주면 파일로 생성되는데 생성된 파일은 sql에서 열어야 보인다.



con.execute("Create table person(firstname,lastname)")
con.executemany("insert into person(firstname,lastname) values (?,?)",person)

for row in con.execute("select firstname,lastname from person"):
	print(row)
print(con)

print("Delete",con.execute("delete from person where 1=1").rowcount,"rows")
# sql 문에서 1=1 의 조건을 써주는 이유는 데이터를 전부 다 지워 주기 위해서이다.
