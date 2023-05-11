#include <iostream>
using namespace std;

int mai1n()
{
	//cout << "hello c++" << endl;
	int a=10;
	int b = ++a * 10;  // 前置递增：先对变量进行++操作，再计算表达式。
	cout << a << endl;
	cout << b << endl;
	int c = 10;
	int d = c++ * 10;  // 后置递增：先计算表达式，再对变量进行++操作。
	cout << c << endl;
	cout << d << endl;
	return 0;

}
