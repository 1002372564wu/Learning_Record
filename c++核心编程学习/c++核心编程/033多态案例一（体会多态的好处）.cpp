#include<iostream>
using namespace std;

//����ʵ������ �ᳫ������ԭ�򡱡�
// ����ԭ�򣺶���չ���п��ţ����޸Ľ��йرա�

//�ö�̬����ʵ�ּ�����
//ʹ�ö�̬�ĺô���
//1����֯�ṹ����
//2���ɶ���ǿ
//3������ǰ�ںͺ�����չ�Լ�ά���Ը�

//ʵ�ּ�����������(����)
class AbstractCalculator
{
public:
	virtual int getresult()
	{
		return 0;
	}
	int num1;
	int num2;
};

//�ӷ���������
class AddCalculator:public AbstractCalculator
{
public:
	virtual int getresult()
	{
		return num1 + num2;
	}
};

//������������
class SubCalculator :public AbstractCalculator
{
public:
	virtual int getresult()
	{
		return num1 - num2;
	}
};

//�˷���������
class MulCalculator :public AbstractCalculator
{
public:
	virtual int getresult()
	{
		return num1 * num2;
	}
};

void test()
{
	//��̬ʹ������������ָ���������ָ���������

	//�ӷ�����
	AbstractCalculator* abc = new AddCalculator;
	abc->num1 = 100;
	abc->num2 = 100;
	cout << abc->getresult() << endl;
	//�����ǵ�����new�Ŀռ�
	delete abc;

	//��������
	abc = new SubCalculator;
	abc->num1 = 100;
	abc->num2 = 100;
	cout << abc->getresult() << endl;
	delete abc;
}

int main()
{
	test();
}