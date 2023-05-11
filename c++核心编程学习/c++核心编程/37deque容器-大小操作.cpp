#include<iostream>
using namespace std;
#include<deque>

//deque与vector不同点：
//deque只有大小没有容量的概念,即有size(),无capacity()

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

	if (d1.empty())
	{
		cout << "d1为空" << endl;
	}
	else
	{
		cout << "d1不为空" << endl;
		cout << "d1的大小为：" << d1.size() << endl;
	}

	//重新指定大小
	//d1.resize(15); 默认填充0
	d1.resize(15,1);
	printdeque(d1);

	d1.resize(5);
	printdeque(d1);
}

int main()
{
	test();
}