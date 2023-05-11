#include<iostream>
using namespace std;
#include<functional>
#include<vector>
#include<algorithm>
#include<numeric>

//  fill  指定范围元素替换成指定元素

void print(int val)
{
	cout << val << " ";
}


void test()
{
	vector<int>v;
	v.resize(10);

	for_each(v.begin(), v.end(), print);
	cout << endl;

	//后期重新填充
	fill(v.begin(), v.end(), 888);
	for_each(v.begin(), v.end(), print);
	cout << endl;
}

int main()
{
	test();
}