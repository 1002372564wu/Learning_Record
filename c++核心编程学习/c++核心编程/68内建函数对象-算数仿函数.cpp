#include<iostream>
using namespace std;
#include<functional>

//negate 一元仿函数 取反仿函数
void test()
{
	negate<int>n;
	cout << n(50) << endl;
}

//plus 二元仿函数 加法
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