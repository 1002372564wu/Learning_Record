#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

void myPrint(int val)
{
	cout << val << endl;
}

void test()
{
	//����һ��vector����������
	vector<int> v;

	//��������������
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);

	//ͨ�����������������е�����
	
	// ��һ�ֱ�����ʽ
	//vector<int>::iterator itBegin = v.begin(); //��ʼ��������ָ�������е�һ��Ԫ��
	//vector<int>::iterator itEnd = v.end(); //������������ָ�����������һ��Ԫ�ص���һ��λ��

	//while (itBegin!=itEnd)
	//{
	//	cout << *itBegin << endl;
	//	itBegin++;
	//}

	//�ڶ��ֱ�����ʽ
	/*for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << endl;
	}*/

	//�����ֱ�����ʽ ����STL�ṩ�ı����㷨
	for_each(v.begin(), v.end(), myPrint);
}

int main()
{
	test();
}