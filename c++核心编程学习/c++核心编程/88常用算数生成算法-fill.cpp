#include<iostream>
using namespace std;
#include<functional>
#include<vector>
#include<algorithm>
#include<numeric>

//  fill  ָ����ΧԪ���滻��ָ��Ԫ��

void print(int val)
{
	cout << val << " ";
}


void test()
{
	vector<int>v;
	v.resize(10);

	for_each(v.begin(), v.end(), print);
	cout << endl;

	//�����������
	fill(v.begin(), v.end(), 888);
	for_each(v.begin(), v.end(), print);
	cout << endl;
}

int main()
{
	test();
}