#include<iostream>
using namespace std;
#include<deque>

//�����õ�������������Ԫ�أ�[]��atҲ����
//front �� back����������һ�������һ��Ԫ��

void test()
{
	deque<int>d;
	d.push_back(10);
	d.push_back(20);
	d.push_back(30);
	d.push_front(100);
	d.push_front(200);
	d.push_front(300);

	//ͨ��[]��ʽ����Ԫ��
	for (int i = 0; i < d.size(); i++)
	{
		cout << d[i] << " ";
	}
	cout << endl;
	
	//ͨ��at��ʽ����Ԫ��
	for (int i = 0; i < d.size(); i++)
	{
		cout << d.at(i) << " ";
	}
	cout << endl;

	cout << "��һ��Ԫ��Ϊ��" << d.front() << endl;
	cout << "���һ��Ԫ��Ϊ��" << d.back() << endl;
}

int main()
{
	test();
}