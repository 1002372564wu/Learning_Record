#include<iostream>
using namespace std;

//左移运算符重载

class Person
{
	friend ostream& operator<<(ostream& cout, Person& p);
public:
	Person(int a, int b)
	{
		A = a;
		B = b;
	}
private:
	int A;
	int B;
};

//用全局函数重载左移运算符
//本质：operator<<(cout,p)  简化：cout<<p
ostream & operator<<(ostream &cout, Person& p)
{
	cout << p.A << endl << p.B;
	return cout;
}

void test01()
{
	Person p(10,10);
	//链式编程
	cout << p <<endl;
}

int main()
{
	test01();
}