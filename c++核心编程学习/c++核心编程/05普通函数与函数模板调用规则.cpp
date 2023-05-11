#include<iostream>
using namespace std;

//1、如果函数模板和普通函数都可以调用 优先调用普通函数
//2、可以通过空模板参数列表 强制调用函数模板
//3、函数模板也可以发生函数重载
//4、如果函数模板可以产生更好的匹配 优先调用函数模板

void myprint(int a, int b)
{
	cout << "调用普通函数" << endl;
}

template<class T>
void myprint(T a, T b)
{
	cout << "调用函数模板" << endl;
}

template<class T>
void myprint(T a, T b, T c)
{
	cout << "调用函数模板重载" << endl;
}

void test01()
{
	int a = 10;
	int b = 10;
	int c = 10;
	myprint<>(a, b); //通过空模板参数列表 强制调用函数模板

	myprint(a, b, c);//函数模板也可以发生函数重载

	char c1 = 'a';
	char c2 = 'b';
	myprint(c1, c2); //如果函数模板可以产生更好的匹配 优先调用函数模板
}

int main()
{
	test01();
}