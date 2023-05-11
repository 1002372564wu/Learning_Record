#include<iostream>
using namespace std;

//纯虚函数和抽象类
class base
{
public:
	//纯虚函数语法
	//只要有一个纯虚函数，这个类称为抽象类
	//抽象类特点：
	//1、无法实例化对象
	//2、抽象类的子类必须要重写父类中的纯虚函数，否则也属于抽象类
	virtual void func() = 0;  
};

class son :public base
{
public:
	virtual void func()
	{
		cout << "func函数调用" << endl;
	}
};

void test()
{
	//多态使用条件：父类的指针或引用指向子类对象
	base* b = new son;
	b->func();
}

int main()
{
	test();
}