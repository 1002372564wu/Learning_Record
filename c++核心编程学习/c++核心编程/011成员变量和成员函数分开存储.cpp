#include<iostream>
using namespace std;

//��Ա�����ͳ�Ա�����Ƿֿ��洢��

class Person1
{
	
};

class Person2
{ 
	int A; //�Ǿ�̬��Ա����  ������Ķ�����

	static int B;//��̬��Ա���� ��������Ķ�����

	void func() {}// �Ǿ�̬��Ա���� ��������Ķ�����

	static void func1() {}//��̬��Ա���� ��������Ķ�����
};
int Person2::B = 10;

void test1()
{
	Person1 p;
	// �ٿն���ռ���ڴ�ռ�Ϊ��1
	// ԭ��c++���������ÿ���ն���Ҳ����һ���ӽܿռ䣬��Ϊ�����ֿն�����ռ�ڴ��λ�á�
	// �� ÿ���ն���Ӧ����һ����һ�޶����ڴ��ַ��
	cout << sizeof(p) << endl;
}

void test2()
{
	Person2 p;
	//��int�Ǿ�̬��Ա����Aռ���ڴ�ռ䣺4
	cout << sizeof(p) << endl;
}

int main()
{
	test1();
	test2();
}