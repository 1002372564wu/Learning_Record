#include<iostream>
using namespace std;
#include<string>

void test()
{
	string str = "hello";

	// 1��ͨ��[]���ʵ����ַ�
	for (int i = 0; i < str.length(); i++)
	{
		cout << str[i] << " ";
	}
	cout << endl;

	// 2��ͨ��at��ʽ���ʵ����ַ�
	for (int i = 0; i < str.size(); i++)
	{
		cout << str.at(i) << " ";
	}
	cout << endl;

	//�޸ĵ����ַ�
	str[0] = 'X';
	cout << str << endl;

	str.at(1) = 'X';
	cout << str << endl;
}

int main()
{
	test();
}