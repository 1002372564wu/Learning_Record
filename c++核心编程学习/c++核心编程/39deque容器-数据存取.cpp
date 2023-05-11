#include<iostream>
using namespace std;
#include<deque>

//除了用迭代器访问容器元素，[]和at也可以
//front 和 back返回容器第一个和最后一个元素

void test()
{
	deque<int>d;
	d.push_back(10);
	d.push_back(20);
	d.push_back(30);
	d.push_front(100);
	d.push_front(200);
	d.push_front(300);

	//通过[]方式访问元素
	for (int i = 0; i < d.size(); i++)
	{
		cout << d[i] << " ";
	}
	cout << endl;
	
	//通过at方式访问元素
	for (int i = 0; i < d.size(); i++)
	{
		cout << d.at(i) << " ";
	}
	cout << endl;

	cout << "第一个元素为：" << d.front() << endl;
	cout << "最后一个元素为：" << d.back() << endl;
}

int main()
{
	test();
}