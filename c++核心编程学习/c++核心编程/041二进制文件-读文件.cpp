#include<iostream>
using namespace std;
#include<fstream>

class Person
{
public:
	char m_name[64];
	int m_age;
};

//�������ļ� ���ļ�
void test()
{
	//1������ͷ�ļ�

	//2������������
	ifstream ifs;

	//3�����ļ� �ж��ļ��Ƿ�򿪳ɹ�
	ifs.open("person.txt", ios::in | ios::binary);

	if (!ifs.is_open())
	{
		cout << "�ļ���ʧ�ܣ�" << endl;
		return;
	}

	//4�����ļ�
	Person p;
	ifs.read((char*)&p, sizeof(Person));
	cout << "������" << p.m_name << " ���䣺" << p.m_age << endl;

	//5���ر��ļ�
	ifs.close();
}

int main()
{
	test();
}