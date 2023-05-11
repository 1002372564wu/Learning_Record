#include<iostream>
using namespace std;
#include<string>



void test()
{
	string str = "hello";

	//≤Â»Î
	str.insert(1, "XXX");
	cout << str << endl;

	//…æ≥˝
	str.erase(1, 3);
	cout << str << endl;
}

int main()
{
	test();
}