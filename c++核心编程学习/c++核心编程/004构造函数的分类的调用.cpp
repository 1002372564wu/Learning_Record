#include<iostream>
using namespace std;

//分类：
// 按参数分类：无参构造(默认构造)和有参构造
// 按类型分类：普通构造和拷贝构造    
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
	Person(const Person &p)
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

//调用
void test01()
{
	//1、括号法
	Person p1; //默认构造函数,ps：调用默认构造函数不要加括号，不然编译器会当成函数声明。
	Person p2(10);//有参构造函数
	Person p3(p2);//拷贝构造函数
}
void test02()
{
	//2、显示法
	Person p1;
	Person p2 = Person(10);//有参构造
	Person p3 = Person(p2);//拷贝构造
	Person(10);//匿名对象 特点：执行结束后，系统会理解回收匿名对象。
}
void test03()
{
	//3、隐式转换法
	Person p4 = 10;//相当于写了：Person p4=Person(10); 有参构造
	Person p5 = p4;//拷贝构造
}

int main() 
{
	//test01();
	//test02();
	test03();
}