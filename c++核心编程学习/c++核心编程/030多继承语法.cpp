#include<iostream>
using namespace std;

//��̳��﷨
class base1
{
public:
	base1()
	{
		A = 100;
	}
	int A;
};

class base2
{
public:
	base2()
	{
		A = 200;
	}
	int A;
};

//����̳�base1��base2
//�﷨��class ���ࣺ �̳з�ʽ ����1���̳з�ʽ ����2
class son :public base1, public base2
{
public:
	son()
	{
		C = 300;
		D = 400;
	}

	int C;
	int D;
};

void test()
{
	son s;
	cout << sizeof(s) << endl; //16
	//�������г���ͬ����Ա����Ҫ������������
	cout << s.base1::A << endl;
	cout << s.base2::A << endl;
}

int main()
{
	test();
}
