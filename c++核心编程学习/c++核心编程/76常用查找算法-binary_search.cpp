#include<iostream>
using namespace std;
#include<functional>
#include<vector>
#include<algorithm>

//���ò����㷨 binary_search  ����ֵ��һ��bool���͵�ֵ
//ע�⣺����������һ����������(�͵ײ�ʵ���й�)

void test()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	bool ret = binary_search(v.begin(), v.end(), 9);
	if (ret)
	{
		cout << "�鵽��" << endl;
	}
	else
	{
		cout << "û�鵽" << endl;
	}
}

int main()
{
	test();
}