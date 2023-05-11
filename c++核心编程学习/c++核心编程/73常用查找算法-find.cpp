#include<iostream>
using namespace std;
#include<functional>
#include<vector>
#include<algorithm>

//查用查找算法 find   返回值是一个迭代器

//查找 内置数据类型
void test01()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	//查找容器中是否有 5 这个元素
	vector<int>::iterator it = find(v.begin(), v.end(), 5);
	if (it == v.end())
	{
		cout << "没有找到" << endl;
	}
	else
	{
		cout << "找到了：" << *it << endl;
	}
}

//查找自定义数据类型
class Person
{
public:
	Person(string name, int age)
	{
		this->m_name = name;
		this->m_age = age;
	}

	//重载==号  底层find才知道如何对比Person数据类型
	bool operator==(const Person& p)
	{
		if (this->m_name == p.m_name && this->m_age == p.m_age)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	string m_name;
	int m_age;
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

	Person ppp("艾弗森", 3);

	vector<Person>::iterator it = find(v.begin(), v.end(), ppp);
	if (it == v.end())
	{
		cout << "没有找到" << endl;
	}
	else
	{
		cout << "找到了,姓名： " << it->m_name << "号码： " << it->m_age << endl;
	}
}

int main()
{
	//test01();
	test02();
}