#include<iostream>
using namespace std;
#include<functional>
#include<vector>
#include<algorithm>

//���ò����㷨��adjacent_find   �������������ظ�Ԫ��  ����ֵ�ǵ�����

void test01()
{
	vector<int>v;
	v.push_back(0);
	v.push_back(2);
	v.push_back(0);
	v.push_back(3);
	v.push_back(1);
	v.push_back(4);
	v.push_back(3);
	//v.push_back(3);
	v.push_back(2);
	v.push_back(1);

	vector<int>::iterator it = adjacent_find(v.begin(), v.end());
	if (it == v.end())
	{
		cout << "û�ҵ������ظ�Ԫ��" << endl;
	}
	else
	{
		cout << "�ҵ���:" << *it << endl;
	}
}

int main()
{
	test01();
}