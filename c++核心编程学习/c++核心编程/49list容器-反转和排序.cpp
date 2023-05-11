#include<iostream>
using namespace std;
#include<list>

void printList(const list<int>& L)
{
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

bool compare(int v1, int v2)
{
	//降序 让第一个数>第二个数
	return v1 > v2;
}

void test()
{
	list<int>L;

	L.push_back(20);
	L.push_back(10);
	L.push_back(50);
	L.push_back(40);
	L.push_back(30);

	printList(L);

	//反转
	L.reverse();
	printList(L);

	//sort(L1.begin(),L1.end())   不支持随机访问迭代器的容器，不可以用标准算法
	//不支持随机访问迭代器的容器，内部提供对应一些算法

	//排序
	L.sort(compare); //回调函数 可以降序
	printList(L);
}

int main()
{
	test();
}