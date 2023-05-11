#include<iostream>
using namespace std;

//成员变量和成员函数是分开存储的

class Person1
{
	
};

class Person2
{ 
	int A; //非静态成员变量  属于类的对象上

	static int B;//静态成员变量 不属于类的对象上

	void func() {}// 非静态成员函数 不属于类的对象上

	static void func1() {}//静态成员函数 不属于类的对象上
};
int Person2::B = 10;

void test1()
{
	Person1 p;
	// ①空对象占用内存空间为：1
	// 原因：c++编译器会给每个空对象也分配一个子杰空间，是为了区分空对象所占内存的位置。
	// 即 每个空对象都应该有一个独一无二的内存地址。
	cout << sizeof(p) << endl;
}

void test2()
{
	Person2 p;
	//②int非静态成员变量A占用内存空间：4
	cout << sizeof(p) << endl;
}

int main()
{
	test1();
	test2();
}