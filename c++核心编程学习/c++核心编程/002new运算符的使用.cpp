#include<iostream>
using namespace std;

// 1��new�Ļ����﷨
int* func()
{
	//new���ص��Ǹ��������͵�ָ��,������ָ��p���ա�
	int* p = new int(10);
	return p;
}

void test01()
{
	int* p = func();
	cout << *p << endl;
	cout << *p << endl; // ���������� �ɳ���Ա�����٣�����Ա�����ͷš�
	delete p;
	cout << *p << endl; // �޷�����
}
// 2���ڶ�������new��������
void test02()
{
	int* arr = new int[10];
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 100;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}
	//�ͷŶ������飬Ҫ��[]
	delete[] arr;
}

int main()
{
	test02();
}