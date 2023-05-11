#include<iostream>
using namespace std;

//赋值运算符重载

class Person
{
public:

	Person(int a)
	{
		age = new int(a);
	}

	~Person()
	{
		if (age != NULL)
		{
			delete age;
			age = NULL;
		}
	}

	//重载赋值运算符
	Person& operator=(Person& p)
	{
		//编译器提供的是浅拷贝，即age=p.age
		//应该先判断是否有属性在堆区，若有则先释放干净，再进行深拷贝
		if (age != NULL)
		{
			delete age;
			age = NULL;
		}
		//深拷贝
		age = new int(*p.age);
		return *this;
	}


	int* age;
};

void test01()
{
	Person p1(18);

	Person p2(20);

	Person p3(30);

	p3 = p2 = p1;
	
	cout << *p1.age << endl;

	cout << *p2.age << endl;

	cout << *p3.age << endl;
}

int main()
{
	test01();
}