#include<iostream>
using namespace std;

class base
{
public:
	static int A;

	static void func()
	{
		cout << "base�µľ�̬��Ա����" << endl;
	}
};
//��̬��Ա�������������������ʼ��
int base::A = 100;


class son :public base
{
public:
	static int A;

	static void func()
	{
		cout << "son�µľ�̬��Ա����" << endl;
	}
};
//��̬��Ա�������������������ʼ��
int son::A = 200;

//ͬ����̬��Ա����
void test01()
{
	//1��ͨ��������ʾ�̬��Ա����

	son s;
	//��ʾ���������ֵ:200
	cout << s.A << endl;
	//���������Է��ʸ����µ�ֵ��100
	cout << s.base::A << endl;
	//2��ͨ������������

	//��ʾ���������ֵ��200
	cout << son::A << endl;
	//���������Է��ʸ����ֵ��100
	//ǰһ��::����ͨ��������ʽ���ʣ��ڶ���::������ʸ�����������
	cout << son::base::A << endl;

}


//ͬ����̬��Ա����
void test02()
{
	//1��ͨ���������
	son s1;
	s1.func();//����
	s1.base::func();//����
	//2��ͨ����������
	son::func();
	son::base::func();
}

int main()
{
	//test01();
	test02();
}