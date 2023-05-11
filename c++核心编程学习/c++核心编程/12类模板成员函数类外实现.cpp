#include<iostream>
using namespace std;
#include<string>

//��ģ���г�Ա��������ʵ��ʱ����Ҫ����ģ��Ĳ����б�

template<class T1,class T2>
class Person
{
public:
	Person(T1 name, T2 age); //���캯����������
	void show(); //��Ա������������

	T1 m_name;
	T2 m_age;
};

//���캯������ʵ��
template<class T1, class T2>
Person<T1, T2>::Person(T1 name, T2 age)
{
	this->m_name = name;
	this->m_age = age;
}

//��Ա��������ʵ��
template<class T1, class T2>
void Person<T1, T2>::show()
{
	cout << this->m_name << endl<<this->m_age << endl;
}

void test()
{
	Person<string,int>p("�⻪��", 23);
	p.show();
}

int main()
{
	test();
}