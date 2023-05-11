#include<iostream>
using namespace std;


//����ģ��
template<typename T> //����һ��ģ�壬���߱�������������н����ŵ�T��Ҫ����T��һ��ͨ����������

void myswap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

void test()
{
	int a = 10;
	int b = 20;
	int c = 30;
	int d = 40;

	//���ú���ģ�彻��
	//���ַ�ʽʹ�ú���ģ��:
	
	//1���Զ������Ƶ�
	myswap(a, b);
	cout << a << endl;
	cout << b << endl;

	//2����ʾָ������
	myswap<int>(c, d);
	cout << c << endl;
	cout << d << endl;
}

int main()
{
	test();
}