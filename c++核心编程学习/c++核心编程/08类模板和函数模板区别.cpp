#include<iostream>
using namespace std;
#include<string>

//1����ģ��û���Զ������Ƶ�ʹ�÷�ʽ
//2����ģ����ģ������б��п�����Ĭ�ϲ���

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
	//1����ģ��û���Զ������Ƶ�ʹ�÷�ʽ
	// Person p1("�⻪��", 23); �����

	Person<> p1("�⻪��", 23);
	p1.show();
}

int main()
{
	test();
}