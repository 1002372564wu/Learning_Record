#include<iostream>
using namespace std;

//静态成员函数：
//所有对象共享同一个函数
//静态成员函数只能访问静态成员变量。
//原因：由于非静态成员变量属于某个对象的变量，因此函数不知道改的是哪一个对象的变量。

class Person
{
public:
	static void func()
	{
		A = 100;//静态成员函数可以访问静态成员变量
		//B = 200;静态成员函数不可以访问非静态成员变量
		cout << "静态成员函数的调用" << endl;
	}

	static int A;//静态成员变量
	int B;//非静态成员变量
};

int Person::A=10;

void test01()
{
	//1、通过对象访问
	Person p;
	p.func();
	//2、通过类名访问
	Person::func(); //不需要实例化对象，因为函数不属于某个对象。
}

int main()
{
	test01();
}