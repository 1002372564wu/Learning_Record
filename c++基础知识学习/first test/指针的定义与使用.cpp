#include <iostream>
using namespace std;

void main2() 
{
	int a = 10;
	// 1������һ��ָ�룬�﷨���������� *ָ���������
	int * p;
	// ��ָ��p��¼����a�ĵ�ַ
	p = &a;
	cout << &a << endl;
	cout << p << endl; 
	// 2��ʹ��һ��ָ�룺����ͨ�������õķ�ʽ���ҵ�ָ��ָ����ڴ棬ָ��ǰ��*��ʾ������
	*p = 1000; 
	cout << a << endl;
	cout << *p << endl;
	// 3��ָ����ռ���ڴ�ռ�:32λϵͳ��4B��64λϵͳ��8B
	cout << sizeof p << endl;

}