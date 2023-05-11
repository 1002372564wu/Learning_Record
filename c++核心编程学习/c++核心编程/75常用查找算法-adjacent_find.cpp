#include<iostream>
using namespace std;
#include<functional>
#include<vector>
#include<algorithm>

//常用查找算法：adjacent_find   查找有无相邻重复元素  返回值是迭代器

void test01()
{
	vector<int>v;
	v.push_back(0);
	v.push_back(2);
	v.push_back(0);
	v.push_back(3);
	v.push_back(1);
	v.push_back(4);
	v.push_back(3);
	//v.push_back(3);
	v.push_back(2);
	v.push_back(1);

	vector<int>::iterator it = adjacent_find(v.begin(), v.end());
	if (it == v.end())
	{
		cout << "没找到相邻重复元素" << endl;
	}
	else
	{
		cout << "找到了:" << *it << endl;
	}
}

int main()
{
	test01();
}