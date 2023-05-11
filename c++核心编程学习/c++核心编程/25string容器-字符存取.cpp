#include<iostream>
using namespace std;
#include<string>

void test()
{
	string str = "hello";

	// 1、通过[]访问单个字符
	for (int i = 0; i < str.length(); i++)
	{
		cout << str[i] << " ";
	}
	cout << endl;

	// 2、通过at方式访问单个字符
	for (int i = 0; i < str.size(); i++)
	{
		cout << str.at(i) << " ";
	}
	cout << endl;

	//修改单个字符
	str[0] = 'X';
	cout << str << endl;

	str.at(1) = 'X';
	cout << str << endl;
}

int main()
{
	test();
}