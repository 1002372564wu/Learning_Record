#include<iostream>
using namespace std;
#include<functional>
#include<vector>
#include<algorithm>
#include<numeric>

//set_difference  差集
 
//ps：v1与v2差集 和 v2与v1差集 不一样

void print(int val)
{
	cout << val << " ";
}

void test()
{
	vector<int>v1;
	vector<int>v2;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 5);
	}

	vector<int>v;
	v.resize(max(v1.size(), v2.size()));

	//v1和v2的差集
	vector<int>::iterator itend = set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), v.begin());

	for_each(v.begin(), itend, print);
	cout << endl;

	//v2和v1的差集
	vector<int>::iterator itend2 = set_difference(v2.begin(), v2.end(), v1.begin(), v1.end(), v.begin());

	for_each(v.begin(), itend2, print);
}

int main()
{
	test();
}