#include<iostream>
using namespace std;
#include<string>



void test()
{
	string str = "hello";

	//����
	str.insert(1, "XXX");
	cout << str << endl;

	//ɾ��
	str.erase(1, 3);
	cout << str << endl;
}

int main()
{
	test();
}