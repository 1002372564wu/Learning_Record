#include<iostream>
using namespace std;
#include<set>

void test()
{
	//��һ�ַ�ʽ
	pair<string, int>p("�⻪��", 23);
	cout << p.first << p.second << endl;

	//�ڶ��ַ�ʽ
	pair<string, int>p2 = make_pair("�Ʊ�", 24);
	cout << p2.first << p2.second << endl;
}

int main()
{
	test();
}