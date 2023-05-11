#include<iostream>
using namespace std;

//多继承语法
class base1
{
public:
	base1()
	{
		A = 100;
	}
	int A;
};

class base2
{
public:
	base2()
	{
		A = 200;
	}
	int A;
};

//子类继承base1和base2
//语法：class 子类： 继承方式 父类1，继承方式 父类2
class son :public base1, public base2
{
public:
	son()
	{
		C = 300;
		D = 400;
	}

	int C;
	int D;
};

void test()
{
	son s;
	cout << sizeof(s) << endl; //16
	//当父类中出现同名成员，需要加作用域区分
	cout << s.base1::A << endl;
	cout << s.base2::A << endl;
}

int main()
{
	test();
}
