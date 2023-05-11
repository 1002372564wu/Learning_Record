#include<iostream>
using namespace std;
#include<functional>
#include<vector>
#include<algorithm>
 
//   reverse  反转数据

void print(int val)
{
	cout << val << " ";
}

void test()
{
	vector<int>v;
	v.push_back(1);
	v.push_back(3);
	v.push_back(2);
	v.push_back(4);
	v.push_back(6);
	v.push_back(5);

	for_each(v.begin(), v.end(), print);
	cout << endl;

	reverse(v.begin(), v.end());

	for_each(v.begin(), v.end(), print);
}

int main()
{
	test();
}

