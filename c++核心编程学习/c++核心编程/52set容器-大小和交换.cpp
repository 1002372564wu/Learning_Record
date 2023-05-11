#include<iostream>
using namespace std;
#include<set>

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
	set<int>s;

	//�������� ֻ��insert��ʽ
	s.insert(10);
	s.insert(40);
	s.insert(30);
	s.insert(20);

	//�ж��Ƿ�Ϊ��
	if (s.empty())
	{
		cout << "sΪ��" << endl;
	}
	else
	{
		cout << "s��Ϊ��" << endl;
		cout << "s��СΪ��" << s.size() << endl;
	}

	set<int>s1;
	s1.insert(100);
	s1.insert(400);
	s1.insert(300);
	s1.insert(200);

	s.swap(s1);
	printset(s);
	printset(s1);
}

int main()
{
	test();
}