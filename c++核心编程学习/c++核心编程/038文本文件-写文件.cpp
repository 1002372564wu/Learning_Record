#include<iostream>
using namespace std;
#include<fstream>

//文本文件  写文件
void test()
{
//1、包含头文件fstream

//2、创建流对象

	ofstream ofs;

	//3、指定打开方式
	ofs.open("test.txt", ios::out);

	//4、写内容
	ofs << "姓名：吴华杰" << endl;
	ofs << "年龄：23" << endl;
	ofs << "性别：男" << endl;

	//5、关闭文件
	ofs.close();
}

int main()
{
	test();
}
