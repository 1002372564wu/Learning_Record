#include<iostream>
using namespace std;
#include<set>

//��������ظ����ݿ�����set������������mutilset

void test()
{
	set<int>s;

	//s.insert����һ��pair����
	pair<set<int>::iterator, bool> ret = s.insert(10);

	if (ret.second)
	{
		cout << "��һ�β���ɹ�" << endl;
	}
	else
	{
		cout << "��һ�β���ʧ��" << endl;
	}

	ret = s.insert(10);
	if (ret.second)
	{
		cout << "��һ�β���ɹ�" << endl;
	}
	else
	{
		cout << "��һ�β���ʧ��" << endl;
	}


	multiset<int>sm;
	//��������ظ�ֵ
	sm.insert(10);
	sm.insert(10);

	for (multiset<int>::iterator it = sm.begin(); it != sm.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

int main()
{
	test();
}