#include<iostream>
using namespace std;
#include<vector>
#include<string>

void test()
{
	// ʹ��+=
	string str1 = "��";
	str1 += "���⻪��";
	cout << "str1= " << str1 << endl;

	str1 += ';';
	cout << "str1= " << str1 << endl;

	string str2 = " kobe Iverson";
	str1 += str2;
	cout << "str1= " << str1 << endl;

	//ʹ��append
	string str3 = "I";
	str3.append(" love ");
	cout << "str3= " << str3 << endl;

	str3.append("game abcde",4);
	cout << "str3= " << str3 << endl;

	//str3.append(str2);
	//cout << "str3= " << str3 << endl;

	//str3.append(str2, 0, 5);
	//cout << "str3= " << str3 << endl;

	str3.append(str2, 5, 8);
	cout << "str3= " << str3 << endl;
}

int main()
{
	test();
}