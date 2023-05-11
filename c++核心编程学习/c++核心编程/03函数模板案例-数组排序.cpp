#include<iostream>
using namespace std;

//实现通用 对数组进行排序的函数
//规则：从大到小
//算法：选择排序
//测试：char数组  int数组

//交换函数模板
template<typename T>
void myswap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

//排序算法
template<typename T>
void mysort(T arr[],int len)
{
	for (int i = 0; i < len; i++)
	{
		int max = i;
		for (int j = i + 1; j < len; j++)
		{
			if (arr[max] < arr[j])
			{
				max = j;
			}
		}
		if (max != i)
		{
			myswap(arr[max], arr[i]);
		}
	}
}

//打印数组模板
template<typename T>
void printarray(T arr[],int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void test01()
{
	//测试char数组
	char chararr[] = { "badcfe"};
	int num = sizeof(chararr) / sizeof(char);
	mysort(chararr, num);
	printarray(chararr, num);
}

void test02()
{
	//测试int数组
	int intarr[] = { 7,3,2,5,8,4,2,1 };
	int num = sizeof(intarr) / sizeof(int);
	mysort(intarr, num);
	printarray(intarr, num);
}

int main()
{
	//test01();
	test02();
}