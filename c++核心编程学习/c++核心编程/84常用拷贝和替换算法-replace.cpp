#include<iostream>
using namespace std;
#include<functional>
#include<vector>
#include<algorithm>

//replace   ��������ָ����Χ�ڵľ�Ԫ�ػ�����Ԫ��

void print(int val)
{
	cout << val << " ";
}

void test()
{
	vector<int>v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(2);
	v.push_back(4);
	v.push_back(5);
	v.push_back(2);
	v.push_back(7);

	cout << "�滻ǰ��" << endl;
	for_each(v.begin(), v.end(), print);
	cout << endl;

	//��20�滻��888
	replace(v.begin(), v.end(), 2, 888);
	cout << "�滻��" << endl;
	for_each(v.begin(), v.end(), print);
}

int main()
{
	test();
}