#include<iostream>
using namespace std;
#include<fstream>

//二进制文件 写文件
class Person
{
public:
	char m_name[64];
	int m_age;
};

void test()
{
	//1、包含头文件
	//2、创建流对象
	ofstream ofs("person.txt", ios::out | ios::binary); //内置构造函数

	//3、打开文件
	//ofs.open("person.txt", ios::out | ios::binary);

	//4、写文件
	Person p = { "吴华杰",23 };
	ofs.write((const char*)&p, sizeof(Person));

	//5、关闭文件
	ofs.close();
}

int main()
{
	test();
}