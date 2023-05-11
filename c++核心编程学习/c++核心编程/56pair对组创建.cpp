#include<iostream>
using namespace std;
#include<set>

void test()
{
	//第一种方式
	pair<string, int>p("吴华杰", 23);
	cout << p.first << p.second << endl;

	//第二种方式
	pair<string, int>p2 = make_pair("科比", 24);
	cout << p2.first << p2.second << endl;
}

int main()
{
	test();
}