#include<iostream>
using namespace std;
#include<fstream>
#include<string>

void test()
{
	ifstream ifs;

	ifs.open("test.txt", ios::in);

	if (!ifs.is_open())
	{
		cout << "文件打开失败" << endl;
		return;
	}

	//读数据  第一种方式
	/*char buf[1024] = { 0 };
	while (ifs >> buf)
	{
		cout << buf << endl;
	}

	ifs.close();*/


	////第二种方式
	//char buf[1024] = { 0 };
	//while (ifs.getline(buf, sizeof(buf)))
	//{
	//	cout << buf << endl;
	//}

	////第三种方式
	//string buf;
	//while (getline(ifs, buf))
	//{
	//	cout << buf << endl;
	//}

	//第四种方式
	char c;
	while ((c = ifs.get()) != EOF) //END of file
	{
		cout << c;
	}
}

int main()
{
	test();
}