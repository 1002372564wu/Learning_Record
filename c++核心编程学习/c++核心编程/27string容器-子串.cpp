#include<iostream>
using namespace std;
#include<string>

//���ַ����л�ȡ��Ҫ���ִ�

void test()
{
	string str = "iverson";
	string substr = str.substr(4, 3);

	cout << substr << endl;
}

//ʵ�ò���:�������ַ�л�ȡ�û�����Ϣ
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