#include<iostream>
using namespace std;
#include<functional>
#include<vector>
#include<algorithm>
#include<numeric>

//  accumulate  �ۼӲ���

void test()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	int total = accumulate(v.begin(), v.end(), 1000);//����������Ϊ��ʼ�ۼ�ֵ
	cout << total << endl;
}

int main()
{
	test();
}