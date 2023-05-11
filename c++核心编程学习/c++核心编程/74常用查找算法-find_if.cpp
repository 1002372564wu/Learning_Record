#include<iostream>
using namespace std;
#include<functional>
#include<vector>
#include<algorithm>

//1������������������
//�º���
class greater5
{
public:
	bool operator()(int val)
	{
		return val > 5;
	}
};

void test01()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	
	vector<int>::iterator it = find_if(v.begin(), v.end(), greater5());
	if (it == v.end())
	{
		cout << "û���ҵ�" << endl;
	}
	else
	{
		cout << "�ҵ��ˣ�" << *it << endl;
	}
}

//1�������Զ�����������
class Person
{
public:
	Person(string name,int age)
	{
		this->m_name = name;
		this->m_age = age;
	}
	string m_name;
	int m_age;
};

//�º���
class greater20
{
public:
	bool operator()(Person& p)
	{
		return p.m_age > 20;
	}
};

void test02()
{
	vector<Person>v;
	Person p1("�Ʊ�", 24);
	Person p2("����ɭ", 3);
	Person p3("���", 1);
	Person p4("����", 15);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);

	//��һ���������20����
	vector<Person>::iterator it = find_if(v.begin(), v.end(), greater20());
	if (it == v.end())
	{
		cout << "û���ҵ�" << endl;
	}
	else
	{
		cout << "�ҵ���,������ " << it->m_name << "  ���룺 " << it->m_age << endl;
	}
}

int main()
{
	test01();
	test02();
}