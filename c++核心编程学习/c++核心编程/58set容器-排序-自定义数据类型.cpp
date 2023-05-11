#include<iostream>
using namespace std;
#include<set>

//set 容器排序，存放自定义数据类型

class Person
{
public:
	Person(string name, int age)
	{
		this->m_name = name;
		this->m_age = age;
	}

	string m_name;
	int m_age;
};

//仿函数 指定自定义数据类型排序规则
class compare
{
public:
	bool operator()(const Person& p1, const Person& p2)const
	{
		//按照年龄 降序
		return p1.m_age > p2.m_age;
	}
};

void test()
{
	set<Person, compare>s;

	Person p1("科比", 24);
	Person p2("乔丹", 23);
	Person p3("杜兰特", 35);
	Person p4("艾弗森", 3);
	
	s.insert(p1);
	s.insert(p2);
	s.insert(p3);
	s.insert(p4);

	for (set<Person, compare>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << "姓名：" << (*it).m_name << " 年龄：" << (*it).m_age << endl;
	}

}

int main()
{
	test();
}