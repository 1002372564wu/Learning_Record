#include<iostream>
using namespace std;

class base
{
public:
	base()
	{
		cout << "base�еĹ��캯��" << endl;
	}
	~base()
	{
		cout << "base�е���������" << endl;
	}
};

class son :public base
{
public:
	son()
	{
		cout << "son�еĹ��캯��" << endl;
	}
	~son()
	{
		cout << "son�е���������" << endl;
	}
};

void test()
{
	//base b;

	//���캯������˳���ȹ��츸�࣬�ٹ������ࡣ
	//������������˳��:�͹���˳���෴��
	son s;
}

int main()
{
	test();
}