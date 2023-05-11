#include<iostream>
using namespace std;
#include<map>

//find返回的是迭代器，查到了返回查到位置的迭代器，查不到返回end

void test01()
{
	//查找
	map<int, int>m;
	m.insert(make_pair(1, 10));
	m.insert(make_pair(2, 20));
	m.insert(make_pair(3, 30));

	map<int, int>::iterator pos = m.find(3);

	if (pos != m.end())
	{
		cout << "查找到了元素key = " << (*pos).first << " value = " << pos->second << endl;
	}
	else
	{
		cout << "未找到元素" << endl;
	}

	//统计
	//map不允许插入重复key元素，所以count结果要么是0，要么是1.
	int num = m.count(3);
	cout << "num = " << num << endl;
}

int main()
{
	test01();
}