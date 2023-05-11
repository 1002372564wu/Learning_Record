#include<iostream>
using namespace std;
#include<functional>
#include<vector>
#include<algorithm>

//逻辑非 logical_not

void test()
{
	vector<bool>v;
	v.push_back(true);
	v.push_back(true);
	v.push_back(false);
	v.push_back(true);

	for (vector<bool>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

	//利用逻辑非 将容器v搬运至容器v2中 并执行取反操作
	vector<bool>v2;
	v2.resize(v.size());
	transform(v.begin(), v.end(), v2.begin(), logical_not<bool>());
	for (vector<bool>::iterator it = v2.begin(); it != v2.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

int main()
{
	test();
}