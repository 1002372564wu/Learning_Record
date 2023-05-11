#include<iostream>
using namespace std;
#include<functional>
#include<vector>
#include<algorithm>

//常用查找算法 binary_search  返回值是一个bool类型的值
//注意：容器必须是一个有序序列(和底层实现有关)

void test()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	bool ret = binary_search(v.begin(), v.end(), 9);
	if (ret)
	{
		cout << "查到了" << endl;
	}
	else
	{
		cout << "没查到" << endl;
	}
}

int main()
{
	test();
}