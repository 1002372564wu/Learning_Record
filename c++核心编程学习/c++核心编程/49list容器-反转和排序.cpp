#include<iostream>
using namespace std;
#include<list>

void printList(const list<int>& L)
{
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

bool compare(int v1, int v2)
{
	//���� �õ�һ����>�ڶ�����
	return v1 > v2;
}

void test()
{
	list<int>L;

	L.push_back(20);
	L.push_back(10);
	L.push_back(50);
	L.push_back(40);
	L.push_back(30);

	printList(L);

	//��ת
	L.reverse();
	printList(L);

	//sort(L1.begin(),L1.end())   ��֧��������ʵ��������������������ñ�׼�㷨
	//��֧��������ʵ��������������ڲ��ṩ��ӦһЩ�㷨

	//����
	L.sort(compare); //�ص����� ���Խ���
	printList(L);
}

int main()
{
	test();
}