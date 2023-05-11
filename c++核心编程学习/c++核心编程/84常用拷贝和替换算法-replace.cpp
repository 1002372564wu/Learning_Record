#include<iostream>
using namespace std;
#include<functional>
#include<vector>
#include<algorithm>

//replace   将容器内指定范围内的旧元素换成新元素

void print(int val)
{
	cout << val << " ";
}

void test()
{
	vector<int>v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(2);
	v.push_back(4);
	v.push_back(5);
	v.push_back(2);
	v.push_back(7);

	cout << "替换前：" << endl;
	for_each(v.begin(), v.end(), print);
	cout << endl;

	//将20替换成888
	replace(v.begin(), v.end(), 2, 888);
	cout << "替换后：" << endl;
	for_each(v.begin(), v.end(), print);
}

int main()
{
	test();
}