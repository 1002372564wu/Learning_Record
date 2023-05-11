#include<iostream>
using namespace std;

//常函数：①成员函数后加const变为常函数
//②常函数内不可以修改成员属性，普通成员函数可以。
//③成员属性声明时，加上关键字“mutable”后，在常函数中就可以修改了。
// 
//常对象：①声明对象时前加const变为常对象。
//②常对象只能调用常函数，无法调用普通成员函数。


class Person
{
public:
	// this指针的本质：指针常量，即指针的指向不可改，值可以改
	void showPerson() const // const让指针指向的值也不可以修改
	{
		//A = 100;//  this->A=100;
		// this = NULL; （报错） this指针指向不可以修改
		 
	}
	void func() //普通成员函数
	{

	}

	int A;
	mutable int B; //特殊变量，即使在常函数中，也可以修改这个值。 只需加关键字：mutable
};

//常对象
void test02()
{
	const Person p; 
	//p.A = 100; 不可修改
	p.B = 100;//可以修改
	//常对象只能调用常函数
	p.showPerson();
	//p.func(); 常对象只能调用常函数，不能调用普通成员函数，因为普通成员函数可以修改属性。
}