#include<iostream>
using namespace std;
#include<set>

//set容器：所有元素会在插入时自动被排序
//set/multiset 属于关联式容器，底层结构使用二叉树实现
//set和multiset区别：set不允许有重复元素，multiset可以有

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
	s.insert(10);
	s.insert(10);

	printset(s);

	//拷贝构造
	set<int>s2(s);
	printset(s2);

	//赋值
	set<int>s3;
	s3 = s2;
	printset(s3);

}

int main()
{
	test();
}