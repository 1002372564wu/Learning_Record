#include<iostream>
using namespace std;
#include<deque>

//deque��vector��ͬ�㣺
//dequeֻ�д�Сû�������ĸ���,����size(),��capacity()

void printdeque(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		//*it = 100; ����const���������е����ݲ������޸� 
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
		cout << "d1Ϊ��" << endl;
	}
	else
	{
		cout << "d1��Ϊ��" << endl;
		cout << "d1�Ĵ�СΪ��" << d1.size() << endl;
	}

	//����ָ����С
	//d1.resize(15); Ĭ�����0
	d1.resize(15,1);
	printdeque(d1);

	d1.resize(5);
	printdeque(d1);
}

int main()
{
	test();
}