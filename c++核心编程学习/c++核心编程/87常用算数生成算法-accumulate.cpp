#include<iostream>
using namespace std;
#include<functional>
#include<vector>
#include<algorithm>
#include<numeric>

//  accumulate  累加操作

void test()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	int total = accumulate(v.begin(), v.end(), 1000);//第三个参数为起始累加值
	cout << total << endl;
}

int main()
{
	test();
}