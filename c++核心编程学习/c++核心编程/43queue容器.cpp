#include<iostream>
using namespace std;
#include<queue>

class Person
{
public:
	Person(string name,int age)
	{
		this->m_name = name;
		this->age = age;
	}
	string m_name;
	int age;
};

void test()
{
	//��������
	queue<Person>q;

	//׼������
	Person p1("�Ʊ�", 24);
	Person p2("����ɭ", 3);
	Person p3("���", 1);
	Person p4("����", 15);
	
	//���
	q.push(p1);
	q.push(p2);
	q.push(p3);
	q.push(p4);

	//�жϣ�ֻҪ���в��գ��鿴��ͷ�Ͷ�β������
	while (!q.empty())
	{
		//�鿴��ͷ ��β
		cout << "��ͷԪ�ء�������" << q.front().m_name << "���䣺" << q.front().age << endl;
		cout << "��βԪ�ء�������" << q.back().m_name << "���䣺" << q.back().age << endl;

		//����
		q.pop();
	}
	cout << "���д�СΪ��" << q.size() << endl;

}

int main()
{
	test();
}