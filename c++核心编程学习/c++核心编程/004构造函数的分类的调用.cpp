#include<iostream>
using namespace std;

//���ࣺ
// ���������ࣺ�޲ι���(Ĭ�Ϲ���)���вι���
// �����ͷ��ࣺ��ͨ����Ϳ�������    
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
	Person(const Person &p)
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

//����
void test01()
{
	//1�����ŷ�
	Person p1; //Ĭ�Ϲ��캯��,ps������Ĭ�Ϲ��캯����Ҫ�����ţ���Ȼ�������ᵱ�ɺ���������
	Person p2(10);//�вι��캯��
	Person p3(p2);//�������캯��
}
void test02()
{
	//2����ʾ��
	Person p1;
	Person p2 = Person(10);//�вι���
	Person p3 = Person(p2);//��������
	Person(10);//�������� �ص㣺ִ�н�����ϵͳ����������������
}
void test03()
{
	//3����ʽת����
	Person p4 = 10;//�൱��д�ˣ�Person p4=Person(10); �вι���
	Person p5 = p4;//��������
}

int main() 
{
	//test01();
	//test02();
	test03();
}