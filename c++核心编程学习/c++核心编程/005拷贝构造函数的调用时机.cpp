#include<iostream>
using namespace std;

class Person
{
public:
	//普通构造函数
	Person()     //有参
	{
		cout << "Person的无参构造函数调用" << endl;
	}
	Person(int a)//无参
	{
		age = a;
		cout << "Person的有参构造函数调用" << endl;
	}
	//拷贝构造函数:将传入的人身上的所有属性拷贝到我身上。
	Person(const Person& p)
	{
		age = p.age;
		cout << "Person的拷贝构造函数调用" << endl;
	}
	//析构函数
	~Person()
	{
		cout << "Person的析构函数调用" << endl;
	}

	int age;
};

// 1、使用一个已经创建完毕的对象来初始化一个新对象
void test01()
{
	Person p1(20);
	Person p2(p1);
	cout << "p2的年龄:" << p2.age << endl;
}
//2、值传递的方式给函数参数传值
void dowork(Person p)
{

}
void test02()
{
	Person p;
	dowork(p); 
}
//3、值方式返回局部对象
Person dowork2()
{
	Person p1;
	return p1;
}
void test03()
{
	Person p = dowork2();
}

int main()
{
	//test01();
	//test02();
	test03();
}