#include<iostream>
using namespace std;
#include<fstream>

//�������ļ� д�ļ�
class Person
{
public:
	char m_name[64];
	int m_age;
};

void test()
{
	//1������ͷ�ļ�
	//2������������
	ofstream ofs("person.txt", ios::out | ios::binary); //���ù��캯��

	//3�����ļ�
	//ofs.open("person.txt", ios::out | ios::binary);

	//4��д�ļ�
	Person p = { "�⻪��",23 };
	ofs.write((const char*)&p, sizeof(Person));

	//5���ر��ļ�
	ofs.close();
}

int main()
{
	test();
}