#include<iostream>
using namespace std;

class base
{
public:
	base()
	{
		cout << "base中的构造函数" << endl;
	}
	~base()
	{
		cout << "base中的析构函数" << endl;
	}
};

class son :public base
{
public:
	son()
	{
		cout << "son中的构造函数" << endl;
	}
	~son()
	{
		cout << "son中的析构函数" << endl;
	}
};

void test()
{
	//base b;

	//构造函数调用顺序：先构造父类，再构造子类。
	//析构函数调用顺序:和构造顺序相反。
	son s;
}

int main()
{
	test();
}