#include<iostream>
using namespace std;
#include<string>

//��ģ��ͺ���ģ���﷨���ƣ�������ģ��template������࣬�����Ϊ��ģ��

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
	Person<string, int> p1("�⻪��", 23);
	p1.show();

}

int main()
{
	test();
}