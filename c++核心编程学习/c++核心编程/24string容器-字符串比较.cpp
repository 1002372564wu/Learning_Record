#include<iostream>
using namespace std;
#include<string>

//�ַ����Ƚ��ǰ����ַ���ASCLL����жԱȵ�
// =����0  >����1  <����-1

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