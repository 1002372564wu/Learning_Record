#include<iostream>
using namespace std;
#include<functional>
#include<vector>
#include<algorithm>

//���ò����㷨 find   ����ֵ��һ��������

//���� ������������
void test01()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	//�����������Ƿ��� 5 ���Ԫ��
	vector<int>::iterator it = find(v.begin(), v.end(), 5);
	if (it == v.end())
	{
		cout << "û���ҵ�" << endl;
	}
	else
	{
		cout << "�ҵ��ˣ�" << *it << endl;
	}
}

//�����Զ�����������
class Person
{
public:
	Person(string name, int age)
	{
		this->m_name = name;
		this->m_age = age;
	}

	//����==��  �ײ�find��֪����ζԱ�Person��������
	bool operator==(const Person& p)
	{
		if (this->m_name == p.m_name && this->m_age == p.m_age)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	string m_name;
	int m_age;
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

	Person ppp("����ɭ", 3);

	vector<Person>::iterator it = find(v.begin(), v.end(), ppp);
	if (it == v.end())
	{
		cout << "û���ҵ�" << endl;
	}
	else
	{
		cout << "�ҵ���,������ " << it->m_name << "���룺 " << it->m_age << endl;
	}
}

int main()
{
	//test01();
	test02();
}