#include<iostream>
using namespace std;
#include<set>

//find(key)：查找key是否存在，若存在，返回该键的迭代器，不存在返回迭代器set.end()

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
	set<int>s1;

	s1.insert(50);
	s1.insert(30);
	s1.insert(20);
	s1.insert(10);
	s1.insert(40);

	set<int>::iterator pos = s1.find(30);
	if (pos != s1.end())
	{
		cout << "找到元素：" << *pos << endl;
	}
	else
	{
		cout << "未找到元素" << endl;
	}

	//统计30的个数 对于set而言 要么是0要么是1
	int num = s1.count(30);
	cout << num;
}

int main()
{
	test();
}
