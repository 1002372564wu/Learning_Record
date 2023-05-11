#include<iostream>
using namespace std;

class base
{
public:
	static int A;

	static void func()
	{
		cout << "base下的静态成员函数" << endl;
	}
};
//静态成员变量类内声明，类外初始化
int base::A = 100;


class son :public base
{
public:
	static int A;

	static void func()
	{
		cout << "son下的静态成员函数" << endl;
	}
};
//静态成员变量类内声明，类外初始化
int son::A = 200;

//同名静态成员属性
void test01()
{
	//1、通过对象访问静态成员变量

	son s;
	//显示的是子类的值:200
	cout << s.A << endl;
	//加作用域以访问父类下的值：100
	cout << s.base::A << endl;
	//2、通过类名来访问

	//显示的是子类的值：200
	cout << son::A << endl;
	//加作用域以访问父类的值：100
	//前一个::代表通过类名方式访问，第二个::代表访问父类作用域下
	cout << son::base::A << endl;

}


//同名静态成员函数
void test02()
{
	//1、通过对象访问
	son s1;
	s1.func();//子类
	s1.base::func();//父类
	//2、通过类名访问
	son::func();
	son::base::func();
}

int main()
{
	//test01();
	test02();
}