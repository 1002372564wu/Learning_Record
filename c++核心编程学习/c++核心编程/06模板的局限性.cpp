#include<iostream>
using namespace std;
#include<string>

// ģ�岢�������ܵ� ��Щ�ض����������� ��Ҫ�þ��廯��ʽ������ʵ��
// ���þ��廯��ģ�壬���Խ���Զ������͵�ͨ�û�
// ps��ѧϰģ�岢����Ϊ��дģ�壬������STL�ܹ�����ϵͳ�ṩ��ģ��


//�Ա����������Ƿ���ȵĺ���

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

template<class T>
bool compare(T& a, T& b)
{
	if (a == b)
	{
		return true;
	}
	else
	{
		return false;
	}
}

//���þ��廯Person�İ汾ʵ�ִ��룬���廯���ȵ���
template<> bool compare(Person& a, Person& b)
{
	if (a.m_name == b.m_name && a.m_age == b.m_age)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void test()
{
	Person p1("Tom", 10);
	Person p2("Tom", 10);

	bool ret = compare(p1, p2);

	cout << ret << endl;
}

int main()
{
	test();
}