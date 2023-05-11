#include<iostream>
using namespace std;

class Person
{
public:
	Person(string n, int a)
	{
		name = n;
		age = a;
	}

	string name;
	int age;

	bool operator==(Person& p)
	{
		if (age == p.age && name == p.name)
		{
			return true;
		}
		else
			return false;
	}

	bool operator!=(Person& p)
	{
		if (age != p.age && name != p.name)
		{
			return true;
		}
		else
			return false;
	}
};

void test01()
{
	Person p1("jay", 23);

	Person p2("jay", 23);

	if (p1 == p2)
	{
		cout << "p1��p2����ȵģ�" << endl;
	}
	else
		cout << "p1��p2�ǲ���ȵģ�" << endl;
}

void test02()
{
	Person p1("jay", 23);

	Person p2("jay", 23);

	if (p1 != p2)
	{
		cout << "p1��p2�ǲ���ȵģ�" << endl;
	}
	else
		cout << "p1��p2����ȵģ�" << endl;
}

int main()
{
	test01();
	test02();
}