#include<iostream>
using namespace std;
#include<string>

//ȫ�ֺ�������ʵ�֣�ֱ��������������Ԫ����
//ȫ�ֺ�������ʵ�֣���Ҫ��ǰ�ñ�����֪��ȫ�ֺ����Ĵ���(�Ƚϸ���)


//ͨ��ȫ�ֺ��� ��ӡperson��Ϣ

//��ǰ�ñ�����֪��Person��Ĵ���
template<class T1, class T2>
class Person;

//ȫ�ֺ�������ʵ��
template<class T1, class T2>
void printPerson2(Person<T1, T2> p)
{
	cout << p.m_name << endl << p.m_age << endl;
}

template<class T1,class T2>
class Person
{
	//ȫ�ֺ��� ����ʵ�� (�˴�����friend����ȫ�ֺ���,��֮ǰ����˽�еĳ�Ա����)
	friend void printPerson(Person<T1, T2> p)
	{
		cout << p.m_name << endl << p.m_age << endl;
	}

	//ȫ�ֺ��� ����ʵ��
	//��һ����ģ������б� <>
	//���ȫ�ֺ���������ʵ�� ��Ҫ�ñ�������ǰ֪����������Ĵ���
	friend void printPerson2<>(Person<T1, T2> p);

public:
	Person(T1 name, T2 age)
	{
		this->m_name = name;
		this->m_age = age;
	}

private:
	T1 m_name;
	T2 m_age;
};



void test()
{
	Person<string, int>p("�⻪��", 23);
	printPerson(p);
}

void test2()
{
	Person<string, int>p("����ɭ", 23);
	printPerson2(p);
}

int main()
{
	test();
	test2();
}