#include<iostream>
using namespace std;
#include<map>



void printmap(map<int, int>& m)
{
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key = " << (*it).first << " value = " << it->second << endl;
	}
	cout << endl;
}

void test()
{
	map<int, int>m;
	//���� ��һ�ַ�ʽ
	m.insert(pair<int, int>(1, 10));
	//���� �ڶ��ַ�ʽ
	m.insert(make_pair(2, 20));
	//���� �����ַ�ʽ
	//m.insert(map<int, int>::value_type(3.30));
	//���� �����ַ�ʽ
	m[4] = 40;

	//[]��������룬��;����������key���ʵ�value
	cout << m[4] << endl;

	printmap(m);

	//ɾ��
	m.erase(m.begin());
	printmap(m);

	m.erase(4);//����keyɾ��
	printmap(m);

	//���
	//m.erase(m.begin(), m.end());
	//m.clear();
}

int main()
{
	test();
}