#include<iostream>
using namespace std;
#include<fstream>

class Person
{
public:
	char m_name[64];
	int m_age;
};

//二进制文件 读文件
void test()
{
	//1、包含头文件

	//2、创建流对象
	ifstream ifs;

	//3、打开文件 判断文件是否打开成功
	ifs.open("person.txt", ios::in | ios::binary);

	if (!ifs.is_open())
	{
		cout << "文件打开失败！" << endl;
		return;
	}

	//4、读文件
	Person p;
	ifs.read((char*)&p, sizeof(Person));
	cout << "姓名：" << p.m_name << " 年龄：" << p.m_age << endl;

	//5、关闭文件
	ifs.close();
}

int main()
{
	test();
}