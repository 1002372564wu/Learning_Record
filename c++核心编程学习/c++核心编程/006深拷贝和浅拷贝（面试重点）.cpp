#include<iostream>
using namespace std;

//ǳ����������:�������ڴ���ظ��ͷţ�����һ���Ƿ�����
//����취���������������Լ�дһ���������캯���������ڶ�������һ���ڴ棬��������ڴ��ظ��ͷŵ����⡣

class Person
{
public:
	//��ͨ���캯��
	Person()     //�޲�
	{
		cout << "Person��Ĭ�Ϲ��캯������" << endl;
	}
	Person(int a,int h)//�в�
	{
		age = a;
		height=new int(h);
		cout << "Person���вι��캯������" << endl;
	}
	//�Լ�дһ���������캯���������ڶ�������һ���ڴ棬��������ڴ��ظ��ͷŵ����⡣
	Person(const Person& p)
	{
		cout << "Person�������캯���ĵ���" << endl;
		age = p.age;
		//height = p.height;������Ĭ��ʵ�ֵľ������д���
		//�������
		height = new int(*p.height);
	}
	//��������
	~Person()
	{
		//��������ͨ�����ڽ��������ٵ��������ͷŲ�����
		if (height != NULL)
		{
			delete height;
			height = NULL;//��ֹҰָ��ĳ���
		}
		cout << "Person��������������" << endl;
	}

	int age;
	int* height;
};

void test01()
{
	Person p1(18,180);
	cout << "p1���䣺" << p1.age << " ��ߣ�"<<*p1.height<<endl;
	Person p2(p1); //���ñ�����Ĭ�ϵĿ������캯������ʱΪǳ����������
	cout << "p1���䣺" << p2.age << " ��ߣ�"<<*p2.height << endl;
}

int main()
{
	test01();
}