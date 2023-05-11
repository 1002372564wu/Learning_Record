#include <iostream>
using namespace std;

void main2() 
{
	int a = 10;
	// 1、定义一个指针，语法：数据类型 *指针变量名；
	int * p;
	// 让指针p记录变量a的地址
	p = &a;
	cout << &a << endl;
	cout << p << endl; 
	// 2、使用一个指针：可以通过解引用的方式来找到指针指向的内存，指针前加*表示解引用
	*p = 1000; 
	cout << a << endl;
	cout << *p << endl;
	// 3、指针所占的内存空间:32位系统是4B，64位系统是8B
	cout << sizeof p << endl;

}