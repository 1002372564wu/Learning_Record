#include<iostream>
using namespace std;
#include<string>

//类模板和函数模板语法相似，在声明模板template后面加类，此类称为类模板

template<class nametype,class agetype>
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
		cout << this->m_name   <<  this->m_age << endl;
	}
	nametype m_name;
	agetype m_age;
};

void test()
{
	Person<string, int> p1("吴华杰", 23);
	p1.show();

}

int main()
{
	test();
}