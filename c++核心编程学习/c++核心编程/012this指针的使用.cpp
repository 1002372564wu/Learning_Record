#include<iostream>
using namespace std;

//this指针的作用：①解决名称冲突 ②返回对象本身用*this
class Person
{
public:
	Person(int age)
	{
		//this指针指向：调用该成员函数的对象，即p1
		this->age = age;
	}

	Person& PersonAddAge(Person p) //返回引用的原因：要返回本体。不加引用返回的是拷贝。
	{
		this->age += p.age;
		return *this; //解引用之后，此时指向的是p2本体。
	}

	int age;
};

void test01()
{
	Person p1(18);
	cout << "p1的年龄：" << p1.age << endl;
}

void test02()
{
	Person p1(10);

	Person p2(10);

	//链式编程思想
	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);

	cout << "p2年龄为：" << p2.age << endl;
}

int main()
{
	//test01();
	test02();
}