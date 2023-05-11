#include<iostream>
using namespace std;

//��ֵ���������

class Person
{
public:

	Person(int a)
	{
		age = new int(a);
	}

	~Person()
	{
		if (age != NULL)
		{
			delete age;
			age = NULL;
		}
	}

	//���ظ�ֵ�����
	Person& operator=(Person& p)
	{
		//�������ṩ����ǳ��������age=p.age
		//Ӧ�����ж��Ƿ��������ڶ��������������ͷŸɾ����ٽ������
		if (age != NULL)
		{
			delete age;
			age = NULL;
		}
		//���
		age = new int(*p.age);
		return *this;
	}


	int* age;
};

void test01()
{
	Person p1(18);

	Person p2(20);

	Person p3(30);

	p3 = p2 = p1;
	
	cout << *p1.age << endl;

	cout << *p2.age << endl;

	cout << *p3.age << endl;
}

int main()
{
	test01();
}