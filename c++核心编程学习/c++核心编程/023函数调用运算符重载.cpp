#include<iostream>
using namespace std;
#include<string>

//函数调用运算符重载

class My_print
{
public:
	//函数调用运算符重载
	void operator()(string test)
	{
		cout << test << endl;
	}

};

void test01()
{
	My_print myprint;
	myprint("jay");   // 由于使用起来非常类似于函数调用，因此也称为仿函数
}

//仿函数非常灵活，没有固定的写法。
//加法类
class myadd
{
public:
	int operator()(int n1, int n2)
	{
		return n1 + n2;
	}
};
void test02()
{
	myadd ma;
	int ret = ma(100, 200);
	cout << ret << endl;

	//匿名函数对象
	cout << myadd()(100, 300) << endl;
}


int main()
{
	test01();
	test02();
}