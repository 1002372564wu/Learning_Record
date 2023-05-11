#include<iostream>
using namespace std;
#include<set>

//允许插入重复数据可以用set，不允许则用mutilset

void test()
{
	set<int>s;

	//s.insert返回一个pair对组
	pair<set<int>::iterator, bool> ret = s.insert(10);

	if (ret.second)
	{
		cout << "第一次插入成功" << endl;
	}
	else
	{
		cout << "第一次插入失败" << endl;
	}

	ret = s.insert(10);
	if (ret.second)
	{
		cout << "第一次插入成功" << endl;
	}
	else
	{
		cout << "第一次插入失败" << endl;
	}


	multiset<int>sm;
	//允许插入重复值
	sm.insert(10);
	sm.insert(10);

	for (multiset<int>::iterator it = sm.begin(); it != sm.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

int main()
{
	test();
}