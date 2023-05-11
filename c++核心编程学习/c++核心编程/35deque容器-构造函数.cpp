#include<iostream>
using namespace std;
#include<deque>

//deque 双端数组，可以对头部进行插入删除操作

//deque和vector的区别：
//①vector对于头部的插入删除效率低，数据量越大效率越低。
//②deque相对而言，对头部插入删除速度比vector快。
//③vector访问元素时的速度会比deque快，这和两者内部实现有关。

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
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	printdeque(d1);

	deque<int>d2(d1.begin(), d1.end());
	printdeque(d2);

	deque<int>d3(10, 100);
	printdeque(d3);

	deque<int>d4(d3);
	printdeque(d4);
}

int main()
{
	test();
}