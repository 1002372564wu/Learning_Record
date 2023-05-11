#include<iostream>
using namespace std;

class base
{
public:
	base()
	{
		A = 10;
	}
	void func()
	{
		cout << "base中的成员函数调用" << endl;
	}
	int A;
};

class son :public base
{
public:
	son()
	{
		A = 100;
	}
	void func()
	{
		cout << "son中的成员函数调用" << endl;
	}
	int A;
};

//1、同名成员属性的处理
void test01()
{
	son s;
	//构造函数先调用父类，再调用子类，所以显示的是子类的值
	cout << s.A << endl;
	//想要显示父类的值，需要加作用域
	cout << s.base::A << endl;
}

//2、同名成员函数的处理
void test02()
{
	son s1;
	//构造函数先调用父类，再调用子类，所以显示的是调用子类的成员函数
	s1.func();
	//想要调用父类的，加作用域
	s1.base::func();
}

int main()
{
	test01();
	test02();
}