#include<iostream>
using namespace std;
#include<vector>
#include<string>

//find���Ҵ������� rfind��������
//find�ҵ��ַ����󷵻ز��ҵĵ�һ���ַ�λ��  �Ҳ�������-1
//replace���滻ʱ��Ҫָ�����ĸ�λ���𣬶��ٸ��ַ����滻��ʲô�����ַ���

//1������
void test()
{
	
	//find()  �鵽�˷�������λ�ã��鲻������-1
	string str1 = "abcdefgde";
	int pos = str1.find("de");

	cout << pos << endl;

	//rfind()
	int pos2 = str1.rfind("de");
	cout << pos2 << endl;
}

//2���滻
void test02()
{
	string str1 = "abcdefg";
	str1.replace(1, 3, "1111");
	cout << "str1= " << str1 << endl;
}


int main()
{
	//test();
	test02();
}