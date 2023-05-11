#include<iostream>
using namespace std;
#include<deque>

//插入和删除提供的位置是迭代器！
//尾插-push_back
//尾删-pop_back
//头插-push_front
//头删-pop_front

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
	deque<int>d1;
	//尾插
	d1.push_back(10);
	d1.push_back(20);

	//头插
	d1.push_front(100);
	d1.push_front(200);

	printdeque(d1);

	//尾删
	d1.pop_back();
	printdeque(d1);

	//头删
	d1.pop_front();
	printdeque(d1);
}

void test02()
{
	deque<int>d1;
	d1.push_back(10);
	d1.push_back(20);
	d1.push_front(100);
	d1.push_front(200);

	printdeque(d1);

	//用insert插入
	d1.insert(d1.begin(), 1000);
	printdeque(d1);
	d1.insert(d1.begin(), 2,10000);
	printdeque(d1);

	//按照区间进行插入
	deque<int>d2;
	d2.push_back(1);
	d2.push_back(2);
	d2.push_back(3);
	d1.insert(d1.begin(), d2.begin(), d2.end());
	printdeque(d2);
	printdeque(d1);
}

void test03()
{
	deque<int>d1;
	d1.push_back(10);
	d1.push_back(20);
	d1.push_front(100);
	d1.push_front(200);

	//删除
	deque<int>::iterator it = d1.begin();
	it++;
	d1.erase(it);
	printdeque(d1);

	//按照区间方式删除
	d1.erase(d1.begin() + 1, d1.end());
	printdeque(d1);

	//清空
	d1.clear();
	printdeque(d1);

}

int main()
{
	//test();
	//test02();
	test03();
}