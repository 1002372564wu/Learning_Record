#include<iostream>
using namespace std;

//���ּ̳з�ʽ

class base
{
public:
	int A;
protected:
	int B;
private:
	int C;
};

//1�������̳�
class son1 : public base
{
public:

	void func()
	{
		A = 10;//����Ĺ���Ȩ�޳�Ա��������Ȼ�ǹ���Ȩ��
		B = 10;//����ı���Ȩ�޳�Ա��������Ȼ�Ǳ���Ȩ��
		//C = 10;//�����˽��Ȩ�޳�Ա �������޷�����
	}
};
//2�������̳�
class son2 :protected base
{
public:
	void func()
	{
		A = 10;//�����еĹ�����Ա�������Ϊ����Ȩ��
		B = 10;//�����еı�����Ա����������Ȼ�Ǳ���Ȩ��
		C = 10;//�����˽�г�Ա������ʲ���
	}
};
//3��˽�м̳�
class son3 :private base
{
public:
	void func()
	{
		A = 10; //�����еĹ�����Ա�������Ϊ˽��Ȩ��
		B = 10; //�����еı�����Ա�������Ϊ˽��Ȩ��
		//C = 10;//�����˽��Ȩ�޳�Ա �������޷�����
	}
};

void test01()
{
	son1 s1;
	s1.A = 100; // 
	//s1.B = 100; //son1�е�B�Ǳ���Ȩ�ޣ������޷����ʡ�
}

void test02()
{
	son2 s2;
	//s2.A = 10;//son2�е�A�Ǳ���Ȩ�ޣ������޷����ʡ�
	//s2.B = 10;//son2�е�A�Ǳ���Ȩ�ޣ������޷����ʡ�
}

void test03()
{
	son3 s3;
	//s3.A = 10;//son3�е�A��˽�г�Ա��������ʲ�����
	//s3.B = 10;//son3�е�A��˽�г�Ա��������ʲ�����
}

//��֤һ��son3�е�A��˽�г�Ա
class grandson3 :public son3
{
public:
	void func()
	{
		//A = 10;  //��֤��son3�е�A��˽�г�Ա
	}
};