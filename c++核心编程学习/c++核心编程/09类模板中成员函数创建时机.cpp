#include<iostream>
using namespace std;
#include<string>

//��ģ���еĳ�Ա����������һ��ʼ�ʹ����������ڵ���ʱ�Ŵ���

class Person1
{
public:
	void showPerson1()
	{
		cout << "Person1 show" << endl;
	}
};

class Person2
{
public:
	void showPerson2()
	{
		cout << "Person2 show" << endl;
	}
};

template<class T>
class myclass
{
public:
	T obj;
	//��ģ���еĳ�Ա����
	void func1()
	{
		obj.showPerson1();
	}
	void func2()
	{
		obj.showPerson2();
	}
};

void test()
{
	myclass<Person1>p;
	p.func1();
	//p.func2();
}

int main()
{
	test();
}