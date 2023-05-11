#include<iostream>
using namespace std;
#include<deque>

//deque ˫�����飬���Զ�ͷ�����в���ɾ������

//deque��vector������
//��vector����ͷ���Ĳ���ɾ��Ч�ʵͣ�������Խ��Ч��Խ�͡�
//��deque��Զ��ԣ���ͷ������ɾ���ٶȱ�vector�졣
//��vector����Ԫ��ʱ���ٶȻ��deque�죬��������ڲ�ʵ���йء�

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