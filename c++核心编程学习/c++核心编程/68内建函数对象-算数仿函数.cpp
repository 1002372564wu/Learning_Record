#include<iostream>
using namespace std;
#include<functional>

//negate һԪ�º��� ȡ���º���
void test()
{
	negate<int>n;
	cout << n(50) << endl;
}

//plus ��Ԫ�º��� �ӷ�
void test02()
{
	plus<int>p;
	cout << p(10, 30) << endl;
}

int main()
{
	test();
	test02();
}