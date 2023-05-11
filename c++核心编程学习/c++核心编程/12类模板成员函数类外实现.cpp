#include<iostream>
using namespace std;
#include<string>

//类模板中成员函数类外实现时，需要加上模板的参数列表。

template<class T1,class T2>
class Person
{
public:
	Person(T1 name, T2 age); //构造函数类内声明
	void show(); //成员函数类内声明

	T1 m_name;
	T2 m_age;
};

//构造函数类外实现
template<class T1, class T2>
Person<T1, T2>::Person(T1 name, T2 age)
{
	this->m_name = name;
	this->m_age = age;
}

//成员函数类外实现
template<class T1, class T2>
void Person<T1, T2>::show()
{
	cout << this->m_name << endl<<this->m_age << endl;
}

void test()
{
	Person<string,int>p("吴华杰", 23);
	p.show();
}

int main()
{
	test();
}