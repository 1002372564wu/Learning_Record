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
		cout << "�ļ���ʧ��" << endl;
		return;
	}

	//������  ��һ�ַ�ʽ
	/*char buf[1024] = { 0 };
	while (ifs >> buf)
	{
		cout << buf << endl;
	}

	ifs.close();*/


	////�ڶ��ַ�ʽ
	//char buf[1024] = { 0 };
	//while (ifs.getline(buf, sizeof(buf)))
	//{
	//	cout << buf << endl;
	//}

	////�����ַ�ʽ
	//string buf;
	//while (getline(ifs, buf))
	//{
	//	cout << buf << endl;
	//}

	//�����ַ�ʽ
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