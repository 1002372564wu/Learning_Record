#include<iostream>
using namespace std;
#include<vector>

//string是c++风格的字符串，其本质上是一个类
//string和char*的区别：
//①char*是一个指针
//②string是一个类，类内部封装了char*，管理这个字符串，是一个char*型的容器。
//string类内部封装了很多成员方法，如find，copy，delete，replace


//string的构造函数
//①string();   创建一个空的字符串 例如：string str
//②string(const char* s);  使用字符串s初始化
//③string(const string& str);  使用一个string对象初始化另一个string对象
//④string(int n,char c);  使用n个字符c初始化

void test()
{
	string s1;// 默认构造

	const char* str = "hello world";
	string s2(str);
	cout << "s2 = " << s2 << endl;

	string s3(s2);
	cout << "s3 = " << s3 << endl;

	string s4(10, 'x');
	cout << "s4 = " << s4 << endl;
}

int main()
{
	test();
}

