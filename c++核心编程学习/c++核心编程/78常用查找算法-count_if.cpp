#include<iostream>
using namespace std;
#include<functional>
#include<vector>
#include<algorithm>

//count_if

//1��������������

//�º���
class greater2
{
public:
	bool operator()(int val)
	{
		return val > 2;
	}
};

void test01()
{
	vector<int>v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(1);
	v.push_back(3);
	v.push_back(1);
	v.push_back(2);

	int num = count_if(v.begin(), v.end(), greater2());
	cout << "����2�����ָ����У�" << num << endl;
}

//2���Զ�����������
class Person
{
public:
	Person(string name, int age)
	{
		this->m_name = name;
		this->age = age;
	}
	string m_name;
	int age;
};

//�º���
class greater10
{
public:
	bool operator()(const Person &p)
	{
		return p.age > 10;
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

	//ͳ�ƴ���10�ĺ������
	int num = count_if(v.begin(), v.end(), greater10());
	cout << num;
}

int main()
{
	//test01();
	test02();
}