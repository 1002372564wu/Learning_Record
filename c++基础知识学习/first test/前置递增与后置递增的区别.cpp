#include <iostream>
using namespace std;

int mai1n()
{
	//cout << "hello c++" << endl;
	int a=10;
	int b = ++a * 10;  // ǰ�õ������ȶԱ�������++�������ټ�����ʽ��
	cout << a << endl;
	cout << b << endl;
	int c = 10;
	int d = c++ * 10;  // ���õ������ȼ�����ʽ���ٶԱ�������++������
	cout << c << endl;
	cout << d << endl;
	return 0;

}
