#include<iostream>
using namespace std;
#include<string>

//�������������Ϊ�����Ա�������ʱ���ȹ�������������ٹ�������
//���������ĵ���˳���෴��
class Phone
{
public:
	//���캯��
	Phone(string name)
	{
		p_name = name;
		cout << "Phone�Ĺ��캯������" << endl;
	}
	~Phone()
	{
		cout<< "Phone��������������" << endl;
	}
	//��Ա����
	string p_name;
};


class Person
{
public:
	//���캯��
	Person(string name, string pname) :m_name(name), m_phone(pname)
	{
		cout << "Person�Ĺ��캯������" << endl;
	};
	~Person()
	{
		cout << "Person��������������" << endl;
	}
	//��Ա����
	string m_name;
	Phone m_phone;

};

void test01()
{
	Person p("�⻪��", "С��9pro");
	cout << p.m_name << p.m_phone.p_name << endl;
}

int main()
{
	test01();
}