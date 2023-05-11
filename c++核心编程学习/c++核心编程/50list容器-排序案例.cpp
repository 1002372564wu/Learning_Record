#include<iostream>
using namespace std;
#include<list>

//�����Զ����������ͣ�����Ҫָ��������򣬷����������֪����ν�������

class Person
{
public:
	Person(string name,int age,int height)
	{
		this->m_name = name;
		this->m_age = age;
		this->m_height = height;
	}

	string m_name;
	int m_age;
	int m_height;
};

//ָ���������
bool compare(Person& p1, Person& p2)
{
	//��������������ͬ����
	if (p1.m_age == p2.m_age)
	{
		return p1.m_height > p2.m_height;
	}
	return p1.m_age < p2.m_age;
}

void test()
{
	list<Person>L;

	//׼������
	Person p1("����", 35, 175);
	Person p2("�ܲ�", 45, 180);
	Person p3("��Ȩ", 40, 170);
	Person p4("����", 25, 190);
	Person p5("�ŷ�", 35, 160);
	Person p6("����", 35, 200);

	//��������
	L.push_back(p1);
	L.push_back(p2);
	L.push_back(p3);
	L.push_back(p4);
	L.push_back(p5);
	L.push_back(p6);

	for (list<Person>::iterator it = L.begin(); it != L.end(); it++)
	{
		cout << "������" << (*it).m_name << " ���䣺" << (*it).m_age << " ��ߣ�" << (*it).m_height << endl;
	}

	//����
	cout << "----------------------" << endl;
	cout << "�����" << endl;
	L.sort(compare); // �ص��������������

	for (list<Person>::iterator it = L.begin(); it != L.end(); it++)
	{
		cout << "������" << (*it).m_name << " ���䣺" << (*it).m_age << " ��ߣ�" << (*it).m_height << endl;
	}
}

int main()
{
	test();
}