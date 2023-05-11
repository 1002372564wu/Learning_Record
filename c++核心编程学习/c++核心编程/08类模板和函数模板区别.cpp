#include<iostream>
using namespace std;
#include<string>

//1、类模板没有自动类型推导使用方式
//2、类模板在模板参数列表中可以有默认参数

template<class nametype=string, class agetype=int>
class Person
{
public:
	Person(nametype name, agetype age)
	{
		this->m_age = age;
		this->m_name = name;
	}
	void show()
	{
		cout << this->m_name << this->m_age << endl;
	}
	nametype m_name;
	agetype m_age;
};

void test()
{
	//1、类模板没有自动类型推导使用方式
	// Person p1("吴华杰", 23); 错误的

	Person<> p1("吴华杰", 23);
	p1.show();
}

int main()
{
	test();
}