#include<iostream>
using namespace std;
#include<vector>

//string��c++�����ַ������䱾������һ����
//string��char*������
//��char*��һ��ָ��
//��string��һ���࣬���ڲ���װ��char*����������ַ�������һ��char*�͵�������
//string���ڲ���װ�˺ܶ��Ա��������find��copy��delete��replace


//string�Ĺ��캯��
//��string();   ����һ���յ��ַ��� ���磺string str
//��string(const char* s);  ʹ���ַ���s��ʼ��
//��string(const string& str);  ʹ��һ��string�����ʼ����һ��string����
//��string(int n,char c);  ʹ��n���ַ�c��ʼ��

void test()
{
	string s1;// Ĭ�Ϲ���

	const char* str = "hello world";
	string s2(str);
	cout << "s2 = " << s2 << endl;

	string s3(s2);
	cout << "s3 = " << s3 << endl;

	string s4(10, 'x');
	cout << "s4 = " << s4 << endl;
}

int main()
{
	test();
}

