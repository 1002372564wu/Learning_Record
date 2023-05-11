#include<iostream>
using namespace std;
#include<vector>
#include<string>

//find查找从左往右 rfind从右往左
//find找到字符串后返回查找的第一个字符位置  找不到返回-1
//replace在替换时，要指定从哪个位置起，多少个字符，替换成什么样的字符串

//1、查找
void test()
{
	
	//find()  查到了返回索引位置，查不到返回-1
	string str1 = "abcdefgde";
	int pos = str1.find("de");

	cout << pos << endl;

	//rfind()
	int pos2 = str1.rfind("de");
	cout << pos2 << endl;
}

//2、替换
void test02()
{
	string str1 = "abcdefg";
	str1.replace(1, 3, "1111");
	cout << "str1= " << str1 << endl;
}


int main()
{
	//test();
	test02();
}