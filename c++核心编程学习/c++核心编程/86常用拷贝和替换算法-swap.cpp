#include<iostream>
using namespace std;
#include<functional>
#include<vector>
#include<algorithm>

//  swap  ��������������Ҫ��ͬ������

void print(int val)
{
	cout << val << " ";
}


void test()
{
	vector<int>v1;
	vector<int>v2;

	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 100);
	}

	cout << "����ǰ��" << endl;
	for_each(v1.begin(), v1.end(), print);
	cout << endl;
	for_each(v2.begin(), v2.end(), print);
	cout << endl;

	swap(v1, v2);
	cout << "������" << endl;
	for_each(v1.begin(), v1.end(), print);
	cout << endl;
	for_each(v2.begin(), v2.end(), print);
	cout << endl;

}

int main()
{
	test();
}