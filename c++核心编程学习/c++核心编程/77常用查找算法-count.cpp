#include<iostream>
using namespace std;
#include<functional>
#include<vector>
#include<algorithm>

//  count   ����ֵΪint


//1��ͳ��������������  
void test01()
{
	vector<int>v;
	v.push_back(1);
	v.push_back(1);
	v.push_back(1);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);

	int num = count(v.begin(), v.end(), 1);
	cout << num << endl;
}

//2��ͳ���Զ�����������
class Person
{
public:
	Person(string name, int age)
	{
		this->m_name = name;
		this->m_age = age;
	}
	bool operator==(const Person& p)
	{
		if (this->m_age == p.m_age)
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
	Person p("�⻪��", 3);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);

	int num = count(v.begin(), v.end(), p);

	cout << "���⻪����ͬ��������Ǹ���Ϊ��" << num << endl;
}

int main()
{
	//test01();
	test02();
}