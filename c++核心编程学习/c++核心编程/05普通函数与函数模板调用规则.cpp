#include<iostream>
using namespace std;

//1���������ģ�����ͨ���������Ե��� ���ȵ�����ͨ����
//2������ͨ����ģ������б� ǿ�Ƶ��ú���ģ��
//3������ģ��Ҳ���Է�����������
//4���������ģ����Բ������õ�ƥ�� ���ȵ��ú���ģ��

void myprint(int a, int b)
{
	cout << "������ͨ����" << endl;
}

template<class T>
void myprint(T a, T b)
{
	cout << "���ú���ģ��" << endl;
}

template<class T>
void myprint(T a, T b, T c)
{
	cout << "���ú���ģ������" << endl;
}

void test01()
{
	int a = 10;
	int b = 10;
	int c = 10;
	myprint<>(a, b); //ͨ����ģ������б� ǿ�Ƶ��ú���ģ��

	myprint(a, b, c);//����ģ��Ҳ���Է�����������

	char c1 = 'a';
	char c2 = 'b';
	myprint(c1, c2); //�������ģ����Բ������õ�ƥ�� ���ȵ��ú���ģ��
}

int main()
{
	test01();
}