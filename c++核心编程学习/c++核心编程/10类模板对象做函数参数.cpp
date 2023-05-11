#include<iostream>
using namespace std;
#include<string>

//ͨ����ģ�崴���Ķ��󣬿������������ַ�ʽ�����н��д���
//ʹ�ñȽϹ㷺���ǵ�һ�֣�ָ�����������

template<class T1, class T2>
class Person
{
public:
	Person(T1 name, T2 age)
	{
		this->m_age = age;
		this->m_name = name;
	}
	void show()
	{
		cout << this->m_name << this->m_age << endl;
	}
	
	T1 m_name;
	T2 m_age;
};

//1��ָ����������
void printPerson1(Person<string, int> &p)
{
	p.show();
}
void test01()
{
	Person<string, int>p("�⻪��", 23);
	printPerson1(p);
}

//2������ģ�廯
template<class T1,class T2>
void printPerson2(Person<T1, T2> &p)
{
	p.show();
	cout << "T1������Ϊ��" << typeid(T1).name() << endl;
	cout << "T2������Ϊ��" << typeid(T2).name() << endl;
}
void test02()
{
	Person<string, int>p("����ɭ", 40);
	printPerson2(p);
}

//3��������ģ�廯
template<class T>
void printPerson3(T& p)
{
	p.show();
	cout << "T������Ϊ��" << typeid(T).name() << endl;
}
void test03()
{
	Person<string, int>p("�Ʊ�", 30);
	printPerson3(p);
}

int main()
{
	//test01();
	//test02();
	test03();
}
