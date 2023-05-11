#include<iostream>
using namespace std;
#include<string>

//全局函数类内实现：直接在类内声明友元即可
//全局函数类外实现：需要提前让编译器知道全局函数的存在(比较复杂)


//通过全局函数 打印person信息

//提前让编译器知道Person类的存在
template<class T1, class T2>
class Person;

//全局函数类外实现
template<class T1, class T2>
void printPerson2(Person<T1, T2> p)
{
	cout << p.m_name << endl << p.m_age << endl;
}

template<class T1,class T2>
class Person
{
	//全局函数 类内实现 (此处加了friend才是全局函数,加之前属于私有的成员函数)
	friend void printPerson(Person<T1, T2> p)
	{
		cout << p.m_name << endl << p.m_age << endl;
	}

	//全局函数 类外实现
	//加一个空模板参数列表 <>
	//如果全局函数是类外实现 需要让编译器提前知道这个函数的存在
	friend void printPerson2<>(Person<T1, T2> p);

public:
	Person(T1 name, T2 age)
	{
		this->m_name = name;
		this->m_age = age;
	}

private:
	T1 m_name;
	T2 m_age;
};



void test()
{
	Person<string, int>p("吴华杰", 23);
	printPerson(p);
}

void test2()
{
	Person<string, int>p("艾弗森", 23);
	printPerson2(p);
}

int main()
{
	test();
	test2();
}