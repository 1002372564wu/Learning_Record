#include<iostream>
using namespace std;
#include<list>

void test()
{
	list<int>L;
	L.push_back(10);
	L.push_back(20);
	L.push_back(30);
	L.push_back(40);

	//L1[0] 不可以用[]访问list容器中的元素 
	//原因：list本质是链表，不是用连续线性空间存储数据，迭代器也是不支持随机访问的
	
	cout << "第一个元素：" << L.front() << endl;
	cout << "最后一个元素：" << L.back() << endl;

	list<int>::iterator it = L.begin();
	it++;
	it--;//可以++和--说明支持双向操作

	it = it + 1;//不支持随机访问
}

int main()
{
	test();
}