#include<iostream>
using namespace std;

//��������
//1������������ʹ��ʱ����������ͨ�����������ã������в����������з���ֵ
//2���������� ��������ͨ�����ĸ����������������Լ���״̬
//3���������������Ϊ��������

class Myadd
{
public:
	int operator()(int v1, int v2)
	{
		return v1 + v2;
	}
};

//1������������ʹ��ʱ����������ͨ�����������ã������в����������з���ֵ
void test01()
{
	Myadd myadd;
	cout << myadd(10, 20) << endl;
}

//2���������� ��������ͨ�����ĸ����������������Լ���״̬
class Myprint
{
public:
	Myprint()
	{
		this->count = 0;
	}
    void operator()(string test)
	{
		cout << test << endl;
		this->count++;
	}
	int count;//�ڲ��Լ�״̬
};

void test02()
{
	Myprint myprint;
	myprint("hello world");
	myprint("hello world");
	myprint("hello world");
	myprint("hello world"); 
	myprint("hello world");

	cout << "myPrint���ô���Ϊ��" << myprint.count << endl;
}

//3���������������Ϊ��������
void doprint(Myprint& mp, string test)
{
	mp(test);
}

void test03()
{
	Myprint myprint;
	doprint(myprint, "Hello c++");
}

int main()
{
	//test01();
	//test02();
	test03();
}