#include<iostream>
using namespace std;
#include<string>

//类模板中的成员函数并不是一开始就创建，而是在调用时才创建

class Person1
{
public:
	void showPerson1()
	{
		cout << "Person1 show" << endl;
	}
};

class Person2
{
public:
	void showPerson2()
	{
		cout << "Person2 show" << endl;
	}
};

template<class T>
class myclass
{
public:
	T obj;
	//类模板中的成员函数
	void func1()
	{
		obj.showPerson1();
	}
	void func2()
	{
		obj.showPerson2();
	}
};

void test()
{
	myclass<Person1>p;
	p.func1();
	//p.func2();
}

int main()
{
	test();
}