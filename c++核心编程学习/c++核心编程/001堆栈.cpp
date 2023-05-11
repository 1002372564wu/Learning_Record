#include<iostream>
using namespace std;

// 在堆区利用new开辟数组
void test()
{
	int *arr = new int[10];
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 100;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}
}
int main()
{
	test();
}