#include<iostream>
using namespace std;

//问题：类模板中成员函数创建时机是在调用阶段，导致分文件编写时链接不到

// 第一种解决方法：直接包含源文件。(但是一般不这么做)
//#include"(13)person.cpp"
// 
//第二种解决方式，将.h和.cpp中的内容写到一起，将后缀名改为.hpp文件
#include"person.hpp"

//#include<string>
//
//template<class T1, class T2>
//class Person
//{
//public:
//	Person(T1 name, T2 age);
//	void show();
//
//	T1 m_name;
//	T2 m_age;
//};

//template<class T1, class T2>
//Person<T1,T2>::Person(T1 name, T2 age)
//{
//	this->m_name = name;
//	this->m_age = age;
//}
//
//template<class T1, class T2>
//void Person<T1, T2>::show()
//{
//	cout << this->m_name << endl << this->m_age << endl;
//}

void test()
{
	Person<string, int>p("吴华杰", 23);
	p.show();
}

int main()
{
	test();
}