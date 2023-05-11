#include<iostream>
using namespace std;
#include<deque>
#include<algorithm>

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
	deque<int>d;
	d.push_back(10);
	d.push_back(20);
	d.push_back(30);
	d.push_front(100);
	d.push_front(200);
	d.push_front(300);
	//300 200 100 10 20 30

	printdeque(d);

	//���� Ĭ�Ϲ����Ǵ�С����
	//����֧��������ʵĵ�����������������������sort�㷨ֱ�Ӷ����������
	//vector����Ҳ��������sort��������
	sort(d.begin(), d.end());
	printdeque(d);
}

int main()
{
	test();
}