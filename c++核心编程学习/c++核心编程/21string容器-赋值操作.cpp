#include<iostream>
using namespace std;
#include<vector>

//string 赋值操作

void test()
{
	// = 形式
	string str1;
	str1 = "hello world";
	cout << "str1= " << str1 << endl;

	string str2;
	str2 = str1;
	cout << "str2= " << str2 << endl;

	string str3;
	str3 = 'a';
	cout << "str3= " << str3 << endl;

	//使用assign
	string str4;
	str4.assign("hello c++");
	cout << "str4= " << str4 << endl;

	string str5;
	str5.assign("hello c++", 5);
	cout << "str5= " << str5 << endl;

	string str6;
	str6.assign(str5);
	cout << "str6= " << str6 << endl;

	string str7;
	str7.assign(10, 's');
	cout << "str7= " << str7 << endl;
}

int main()
{
	test();
}