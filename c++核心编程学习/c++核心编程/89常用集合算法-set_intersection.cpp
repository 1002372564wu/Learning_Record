#include<iostream>
using namespace std;
#include<functional>
#include<vector>
#include<algorithm>
#include<numeric>

//  set_intersection  交集   
// 1、两个集合必须是有序序列
// 2、目标容器开辟空间需要从两容器中取最小值(理论上最大交集数量)
// 3、返回值为迭代器，指向新容器的最后一个元素的位置

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

	v.resize(min(v1.size(), v2.size()));

	//获取交集
	vector<int>::iterator it = set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), v.begin());
	for_each(v.begin(), it, print);
	cout << endl;
}

int main()
{
	test();
}