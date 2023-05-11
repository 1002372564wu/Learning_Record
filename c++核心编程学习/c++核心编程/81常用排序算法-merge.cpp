#include<iostream>
using namespace std;
#include<functional>
#include<vector>
#include<algorithm>

//   merge 两个容器元素合并到另一个容器

void print(int val)
{
	cout << val;
}

void test()
{
	vector<int>v1;
	vector<int>v2;

	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 1);
	}

	//目标容器
	vector<int>v;
	v.resize(v1.size() + v2.size());//提前给目标容器分配空间

	merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v.begin());

	for_each(v.begin(), v.end(), print);
	cout << endl;

}

int main()
{
	test();
}