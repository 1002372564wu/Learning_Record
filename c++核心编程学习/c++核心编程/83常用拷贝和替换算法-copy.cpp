#include<iostream>
using namespace std;
#include<functional>
#include<vector>
#include<algorithm>

//copy

void print(int val)
{
	cout << val << " ";
}

void test()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	vector<int>v2;
	v2.resize(v.size());

	copy(v.begin(), v.end(), v2.begin());

	for_each(v2.begin(), v2.end(), print);
}

int main()
{
	test();
}