#include<iostream>
using namespace std;
#include<functional>
#include<vector>
#include<algorithm>
#include<numeric>

//  set_intersection  ����   
// 1���������ϱ�������������
// 2��Ŀ���������ٿռ���Ҫ����������ȡ��Сֵ(��������󽻼�����)
// 3������ֵΪ��������ָ�������������һ��Ԫ�ص�λ��

void print(int val)
{
	cout << val << " ";
}


void test()
{
	vector<int>v1;
	vector<int>v2;
	vector<int>v;

	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 5);
	}

	v.resize(min(v1.size(), v2.size()));

	//��ȡ����
	vector<int>::iterator it = set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), v.begin());
	for_each(v.begin(), it, print);
	cout << endl;
}

int main()
{
	test();
}