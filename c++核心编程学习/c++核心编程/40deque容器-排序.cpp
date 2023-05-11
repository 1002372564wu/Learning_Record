#include<iostream>
using namespace std;
#include<deque>
#include<algorithm>

void printdeque(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		//*it = 100; 加了const后容器里中的数据不允许修改 
		cout << *it << " ";
	}
	cout << endl;
}

void test()
{
	deque<int>d;
	d.push_back(10);
	d.push_back(20);
	d.push_back(30);
	d.push_front(100);
	d.push_front(200);
	d.push_front(300);
	//300 200 100 10 20 30

	printdeque(d);

	//排序 默认规则是从小到大
	//对于支持随机访问的迭代器的容器，都可以利用sort算法直接对其进行排序
	//vector容器也可以利用sort进行排序
	sort(d.begin(), d.end());
	printdeque(d);
}

int main()
{
	test();
}