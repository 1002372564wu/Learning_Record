#include<iostream>
using namespace std;

//���⣺��ģ���г�Ա��������ʱ�����ڵ��ý׶Σ����·��ļ���дʱ���Ӳ���

// ��һ�ֽ��������ֱ�Ӱ���Դ�ļ���(����һ�㲻��ô��)
//#include"(13)person.cpp"
// 
//�ڶ��ֽ����ʽ����.h��.cpp�е�����д��һ�𣬽���׺����Ϊ.hpp�ļ�
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
	Person<string, int>p("�⻪��", 23);
	p.show();
}

int main()
{
	test();
}