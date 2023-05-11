#include<iostream>
using namespace std;
#include<set>

//set �������򣬴���Զ�����������

class Person
{
public:
	Person(string name, int age)
	{
		this->m_name = name;
		this->m_age = age;
	}

	string m_name;
	int m_age;
};

//�º��� ָ���Զ������������������
class compare
{
public:
	bool operator()(const Person& p1, const Person& p2)const
	{
		//�������� ����
		return p1.m_age > p2.m_age;
	}
};

void test()
{
	set<Person, compare>s;

	Person p1("�Ʊ�", 24);
	Person p2("�ǵ�", 23);
	Person p3("������", 35);
	Person p4("����ɭ", 3);
	
	s.insert(p1);
	s.insert(p2);
	s.insert(p3);
	s.insert(p4);

	for (set<Person, compare>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << "������" << (*it).m_name << " ���䣺" << (*it).m_age << endl;
	}

}

int main()
{
	test();
}