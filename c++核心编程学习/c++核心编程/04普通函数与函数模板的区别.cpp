#include<iostream>
using namespace std;

//��ͨ�����뺯��ģ�������

//1����ͨ�������ÿ��Է�����ʽ����ת��
//2������ģ�� ���Զ������Ƶ� �����Է�����ʽ����ת�� 
//3������ģ�� ����ʾָ������ ���Է�����ʽ����ת��

//��ͨ����
int myadd1(int a, int b)
{
	return a + b;
}

template<class T>
T myadd2(T a, T b)
{
	return a + b;
}

void test01()
{
	int a = 10;
	char c = 'c';

	cout << myadd1(a, c) << endl;

	//�Զ������Ƶ�  ���ᷢ����ʽ����ת��
	//cout << myadd2(a, c) << endl;

	//��ʾָ������  �ᷢ����ʽ����ת��
	cout << myadd2<int>(a, c) << endl;
}

int main()
{
	test01();

}