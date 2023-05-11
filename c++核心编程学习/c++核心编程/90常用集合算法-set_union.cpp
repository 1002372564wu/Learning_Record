#include<iostream>
using namespace std;
#include<functional>
#include<vector>
#include<algorithm>
#include<numeric>

// set_union  并集
//1、两集合要是有序序列
//2、目标容器开辟空间为两容器大小相加
//3、返回值 为迭代器  指向新容器的最后一个元素的位置

void print(int val)
{
	cout << val << " ";
}

void test()
{
	vector<int>v1;
	vector<int>v2;
	vector<int>v;

	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 5);
	}

	v.resize(v1.size() + v2.size());
	vector<int>::iterator itend = set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), v.begin());
	
	for_each(v.begin(), itend, print);
}

int main()
{
	test();
}