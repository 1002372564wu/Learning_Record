#include<iostream>
using namespace std;
#include<set>

void printset(set<int>& s)
{
	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test()
{
	set<int>s;

	//插入数据 只有insert方式
	s.insert(10);
	s.insert(40);
	s.insert(30);
	s.insert(20);

	//判断是否为空
	if (s.empty())
	{
		cout << "s为空" << endl;
	}
	else
	{
		cout << "s不为空" << endl;
		cout << "s大小为：" << s.size() << endl;
	}

	set<int>s1;
	s1.insert(100);
	s1.insert(400);
	s1.insert(300);
	s1.insert(200);

	s.swap(s1);
	printset(s);
	printset(s1);
}

int main()
{
	test();
}