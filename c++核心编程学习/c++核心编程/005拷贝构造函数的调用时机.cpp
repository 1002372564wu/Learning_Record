#include<iostream>
using namespace std;

class Person
{
public:
	//��ͨ���캯��
	Person()     //�в�
	{
		cout << "Person���޲ι��캯������" << endl;
	}
	Person(int a)//�޲�
	{
		age = a;
		cout << "Person���вι��캯������" << endl;
	}
	//�������캯��:������������ϵ��������Կ����������ϡ�
	Person(const Person& p)
	{
		age = p.age;
		cout << "Person�Ŀ������캯������" << endl;
	}
	//��������
	~Person()
	{
		cout << "Person��������������" << endl;
	}

	int age;
};

// 1��ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
void test01()
{
	Person p1(20);
	Person p2(p1);
	cout << "p2������:" << p2.age << endl;
}
//2��ֵ���ݵķ�ʽ������������ֵ
void dowork(Person p)
{

}
void test02()
{
	Person p;
	dowork(p); 
}
//3��ֵ��ʽ���ؾֲ�����
Person dowork2()
{
	Person p1;
	return p1;
}
void test03()
{
	Person p = dowork2();
}

int main()
{
	//test01();
	//test02();
	test03();
}