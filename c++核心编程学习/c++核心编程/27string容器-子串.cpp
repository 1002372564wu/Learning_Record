#include<iostream>
using namespace std;
#include<string>

//从字符串中获取想要的字串

void test()
{
	string str = "iverson";
	string substr = str.substr(4, 3);

	cout << substr << endl;
}

//实用操作:从邮箱地址中获取用户名信息
void test03()
{
	string email = "wuhuajie@163.com";
	int pos = email.find('@');
	string subemail = email.substr(0, pos);
	cout << subemail << endl;
}

int main()
{
	//test();
	test03();
}