#include<iostream>
using namespace std;
#include<set>

//find(key)������key�Ƿ���ڣ������ڣ����ظü��ĵ������������ڷ��ص�����set.end()

void printset(set<int>& s)
{
	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test()
{
	set<int>s1;

	s1.insert(50);
	s1.insert(30);
	s1.insert(20);
	s1.insert(10);
	s1.insert(40);

	set<int>::iterator pos = s1.find(30);
	if (pos != s1.end())
	{
		cout << "�ҵ�Ԫ�أ�" << *pos << endl;
	}
	else
	{
		cout << "δ�ҵ�Ԫ��" << endl;
	}

	//ͳ��30�ĸ��� ����set���� Ҫô��0Ҫô��1
	int num = s1.count(30);
	cout << num;
}

int main()
{
	test();
}
