#include<iostream>
using namespace std;
#include<functional>
#include<vector>
#include<algorithm>

//1、查找内置数据类型
//仿函数
class greater5
{
public:
	bool operator()(int val)
	{
		return val > 5;
	}
};

void test01()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	
	vector<int>::iterator it = find_if(v.begin(), v.end(), greater5());
	if (it == v.end())
	{
		cout << "没有找到" << endl;
	}
	else
	{
		cout << "找到了：" << *it << endl;
	}
}

//1、查找自定义数据类型
class Person
{
public:
	Person(string name,int age)
	{
		this->m_name = name;
		this->m_age = age;
	}
	string m_name;
	int m_age;
};

//仿函数
class greater20
{
public:
	bool operator()(Person& p)
	{
		return p.m_age > 20;
	}
};

void test02()
{
	vector<Person>v;
	Person p1("科比", 24);
	Person p2("艾弗森", 3);
	Person p3("麦迪", 1);
	Person p4("卡特", 15);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);

	//找一个年龄大于20的人
	vector<Person>::iterator it = find_if(v.begin(), v.end(), greater20());
	if (it == v.end())
	{
		cout << "没有找到" << endl;
	}
	else
	{
		cout << "找到了,姓名： " << it->m_name << "  号码： " << it->m_age << endl;
	}
}

int main()
{
	test01();
	test02();
}