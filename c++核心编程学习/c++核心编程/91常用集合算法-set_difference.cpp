#include<iostream>
using namespace std;
#include<functional>
#include<vector>
#include<algorithm>
#include<numeric>

//set_difference  �
 
//ps��v1��v2� �� v2��v1� ��һ��

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

	//v1��v2�Ĳ
	vector<int>::iterator itend = set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), v.begin());

	for_each(v.begin(), itend, print);
	cout << endl;

	//v2��v1�Ĳ
	vector<int>::iterator itend2 = set_difference(v2.begin(), v2.end(), v1.begin(), v1.end(), v.begin());

	for_each(v.begin(), itend2, print);
}

int main()
{
	test();
}