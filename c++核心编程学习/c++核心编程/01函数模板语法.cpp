#include<iostream>
using namespace std;


//函数模板
template<typename T> //声明一个模板，告诉编译器后面代码中紧跟着的T不要报错，T是一个通用数据类型

void myswap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

void test()
{
	int a = 10;
	int b = 20;
	int c = 30;
	int d = 40;

	//利用函数模板交换
	//两种方式使用函数模板:
	
	//1、自动类型推导
	myswap(a, b);
	cout << a << endl;
	cout << b << endl;

	//2、显示指定类型
	myswap<int>(c, d);
	cout << c << endl;
	cout << d << endl;
}

int main()
{
	test();
}