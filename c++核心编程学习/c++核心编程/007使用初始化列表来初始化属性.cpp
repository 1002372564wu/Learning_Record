#include<iostream>
using namespace std;

//传统初始化操作
class Person1
{
public:
	Person1(int a, int b, int c)
	{
		A = a;
		B = b;
		C = c;
	}
	int A;
	int B;
	int C;
};

//初始化列表初始化属性
class Person2
{
public:
	Person2(int a,int b,int c) :A(a), B(b), C(c)
	{

	}

	int A;
	int B;
	int C;
};

void test01()
{
	Person2 p(30,20,10);
	cout << p.A << endl;
	cout << p.B << endl;
	cout << p.C << endl;
}

int main()
{
	test01();
}