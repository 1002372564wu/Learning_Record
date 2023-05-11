#include<iostream>
using namespace std;
#include<vector>

//vector的赋值方式： 使用 operator= 或者 assign 都可以

void printVector(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test()
{
	vector<int> v1; //默认构造 无参构造
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printVector(v1);

	//赋值 operator=
	vector<int> v2;
	v2 = v1;
	printVector(v2);

	//赋值 assign
	vector<int> v3;
	v3.assign(v1.begin(), v1.end());
	printVector(v3);

	//n个elem方式赋值
	vector<int> v4;
	v4.assign(10, 100);
	printVector(v4);

}

int main()
{
	test();
}