#include<iostream>
using namespace std;
#include<map>

//map容器
//①map容器中所有元素都是pair 第一个元素为key（键值），第二个元素为value（实值）
//②所有元素会根据元素的键值自动排序
//本质：map/mutilmap属于关联式容器，底层结构是用二叉树实现
//ps：map容器所有元素都是成对出现，插入数据时要使用对组

void printmap(map<int, int>& m)
{
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key = " << (*it).first << "value = " << it->second << endl;
	}
	cout << endl;
}

void test()
{
	map<int, int>m;

	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(3, 20));
	m.insert(pair<int, int>(2, 30));
	m.insert(pair<int, int>(4, 40));

	printmap(m);

	//拷贝构造
	map<int, int>m2(m);
	printmap(m2);

	//赋值
	map<int,int>m3;
	m3 = m2;
	printmap(m3);
}

int main()
{
	test();
}