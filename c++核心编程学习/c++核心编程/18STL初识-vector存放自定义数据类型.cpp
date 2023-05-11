#include<iostream>
using namespace std;
#include<vector>

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

void test01()
{
	vector<Person> v;
	Person p1("aaa", 10);
	Person p2("bbb", 20);
	Person p3("ccc", 30);
	Person p4("ddd", 40);
	Person p5("eee", 50);

	//���������������
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	//���������е�����
	for (vector<Person>::iterator it = v.begin();it!=v.end();it++)
	{
		//��it�����ú� ����һ��Person�����  �ʿ���ʹ�� .������������
		//cout << "������" << (*it).m_name << " ���䣺" << (*it).m_age << endl;  

		//it�����Ǹ�ָ�룬�ʿ���ͨ��->������������
		cout << "������" << it->m_name << " ���䣺" << it->m_age << endl;
	}
}

//����Զ����������� ָ��
void test02()
{
	vector<Person*> v;
	Person p1("aaa", 10);
	Person p2("bbb", 20);
	Person p3("ccc", 30);
	Person p4("ddd", 40);
	Person p5("eee", 50);

	//���������������
	v.push_back(&p1);
	v.push_back(&p2);
	v.push_back(&p3);
	v.push_back(&p4);
	v.push_back(&p5);

	//��������
	for (vector<Person*>::iterator it = v.begin(); it != v.end(); it++)
	{
		//cout << "������" << (*it)->m_name << " ���䣺" << (*it)->m_age << endl;

		//*it��һ��Personָ�룬**it�൱�ڽ����ã���Person����
		cout << "������" << (**it).m_name << " ���䣺" << (**it).m_age << endl;
	}
}

int main()
{
	//test01();
	test02();
}