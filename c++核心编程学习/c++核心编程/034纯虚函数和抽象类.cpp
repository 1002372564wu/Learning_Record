#include<iostream>
using namespace std;

//���麯���ͳ�����
class base
{
public:
	//���麯���﷨
	//ֻҪ��һ�����麯����������Ϊ������
	//�������ص㣺
	//1���޷�ʵ��������
	//2����������������Ҫ��д�����еĴ��麯��������Ҳ���ڳ�����
	virtual void func() = 0;  
};

class son :public base
{
public:
	virtual void func()
	{
		cout << "func��������" << endl;
	}
};

void test()
{
	//��̬ʹ�������������ָ�������ָ���������
	base* b = new son;
	b->func();
}

int main()
{
	test();
}