#include<iostream>
using namespace std;
#include<map>

//map����Ĭ����������С����
//�������÷º����ı��������

//�º���
class compare
{
public:
	bool operator()(int v1, int v2)const
	{
		//����
		return v1 > v2;
	}
};

void printmap(map<int, int, compare>& m)
{ 
	for (map<int, int, compare>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key = " << (*it).first << " value = " << it->second << endl;
	}
	cout << endl;
}

void test()
{
	map<int, int, compare>m;

	m.insert(make_pair(1, 10));
	m.insert(make_pair(2, 20));
	m.insert(make_pair(3, 30));
	m.insert(make_pair(5, 50));
	m.insert(make_pair(4, 40));
	

	printmap(m);
}

int main()
{
	test();
}