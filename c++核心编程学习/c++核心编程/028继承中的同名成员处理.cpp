#include<iostream>
using namespace std;

class base
{
public:
	base()
	{
		A = 10;
	}
	void func()
	{
		cout << "base�еĳ�Ա��������" << endl;
	}
	int A;
};

class son :public base
{
public:
	son()
	{
		A = 100;
	}
	void func()
	{
		cout << "son�еĳ�Ա��������" << endl;
	}
	int A;
};

//1��ͬ����Ա���ԵĴ���
void test01()
{
	son s;
	//���캯���ȵ��ø��࣬�ٵ������࣬������ʾ���������ֵ
	cout << s.A << endl;
	//��Ҫ��ʾ�����ֵ����Ҫ��������
	cout << s.base::A << endl;
}

//2��ͬ����Ա�����Ĵ���
void test02()
{
	son s1;
	//���캯���ȵ��ø��࣬�ٵ������࣬������ʾ���ǵ�������ĳ�Ա����
	s1.func();
	//��Ҫ���ø���ģ���������
	s1.base::func();
}

int main()
{
	test01();
	test02();
}