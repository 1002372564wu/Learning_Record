#include<iostream>
using namespace std;
#include<functional>
#include<vector>
#include<algorithm>

//排序算法 sort

//仿函数
class print
{
public:
	void operator()(int val)
	{
		cout << val;
	}
};

void test()
{
	vector<int>v;
	v.push_back(1);
	v.push_back(3);
	v.push_back(5);
	v.push_back(4);
	v.push_back(6);
	v.push_back(7);
	v.push_back(2);

	//利用sort排序
	sort(v.begin(), v.end());//第三个参数不填则默认从小到大

	for_each(v.begin(), v.end(), print());
	cout << endl;

	sort(v.begin(), v.end(),greater<int>());//第三个参数：内建函数对象

	for_each(v.begin(), v.end(), print());
}

int main()
{
	test();
}