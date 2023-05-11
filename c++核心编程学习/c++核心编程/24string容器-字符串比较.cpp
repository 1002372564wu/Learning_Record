#include<iostream>
using namespace std;
#include<string>

//字符串比较是按照字符的ASCLL码进行对比的
// =返回0  >返回1  <返回-1

void test()
{
	string str1 = "hello";
	string str2 = "hello";
	string str3 = "aello";

	cout << str1.compare(str2) << endl;
	cout << str1.compare(str3) << endl;
}

int main()
{
	test();
}