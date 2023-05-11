#include<iostream>
using namespace std;
#include<string>

//通过类模板创建的对象，可以有以下三种方式向函数中进行传参
//使用比较广泛的是第一种：指定传入的类型

template<class T1, class T2>
class Person
{
public:
	Person(T1 name, T2 age)
	{
		this->m_age = age;
		this->m_name = name;
	}
	void show()
	{
		cout << this->m_name << this->m_age << endl;
	}
	
	T1 m_name;
	T2 m_age;
};

//1、指定传入类型
void printPerson1(Person<string, int> &p)
{
	p.show();
}
void test01()
{
	Person<string, int>p("吴华杰", 23);
	printPerson1(p);
}

//2、参数模板化
template<class T1,class T2>
void printPerson2(Person<T1, T2> &p)
{
	p.show();
	cout << "T1的类型为：" << typeid(T1).name() << endl;
	cout << "T2的类型为：" << typeid(T2).name() << endl;
}
void test02()
{
	Person<string, int>p("艾弗森", 40);
	printPerson2(p);
}

//3、整个类模板化
template<class T>
void printPerson3(T& p)
{
	p.show();
	cout << "T的类型为：" << typeid(T).name() << endl;
}
void test03()
{
	Person<string, int>p("科比", 30);
	printPerson3(p);
}

int main()
{
	//test01();
	//test02();
	test03();
}
