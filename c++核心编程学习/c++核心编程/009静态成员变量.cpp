#include<iostream>
using namespace std;

//静态成员变量
//1、所有对象共享同一份数据
//2、编译阶段就分配内存
//3、类内声明，类外初始化操作
//静态变量成员也是有私有权限的，故：类外无法访问类内的私有变量成员。
class Person
{
public:
	static int A;


};

int Person::A = 100; //类外初始化

void test01()
{
	Person p;
	cout << p.A << endl;
	Person p2;
	p2.A = 200;
	cout << p.A << endl;
}

//静态成员有两种访问方式
void test02()
{
	//1、通过对象进行访问
	Person p;
	cout << p.A << endl;
	//2、静态成员变量还可以：通过类名进行访问
	cout << Person::A << endl;
}

int main()
{
	//test01();
	test02();
}