#include<iostream>
using namespace std;

//��̬��Ա����
//1�����ж�����ͬһ������
//2������׶ξͷ����ڴ�
//3�����������������ʼ������
//��̬������ԱҲ����˽��Ȩ�޵ģ��ʣ������޷��������ڵ�˽�б�����Ա��
class Person
{
public:
	static int A;


};

int Person::A = 100; //�����ʼ��

void test01()
{
	Person p;
	cout << p.A << endl;
	Person p2;
	p2.A = 200;
	cout << p.A << endl;
}

//��̬��Ա�����ַ��ʷ�ʽ
void test02()
{
	//1��ͨ��������з���
	Person p;
	cout << p.A << endl;
	//2����̬��Ա���������ԣ�ͨ���������з���
	cout << Person::A << endl;
}

int main()
{
	//test01();
	test02();
}