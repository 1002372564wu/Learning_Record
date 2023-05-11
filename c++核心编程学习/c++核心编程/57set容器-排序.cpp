#include<iostream>
using namespace std;
#include<set>

//set容器默认排序规则从小到大
//利用仿函数可以改变排序规则

void printset(set<int>& s)
{
	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//仿函数
class compare
{
public:
	bool operator()(int v1, int v2)const
	{
		return v1 > v2;
	}
};

void test()
{
	set<int, compare>s1;

	s1.insert(10);
	s1.insert(40);
	s1.insert(20);
	s1.insert(50);
	s1.insert(30);

	for (set<int, compare>::iterator it = s1.begin(); it != s1.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

	//指定排序规则为从大到小

}

int main()
{
	test();
}