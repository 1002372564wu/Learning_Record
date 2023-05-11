#include<iostream>
using namespace std;

//ʵ��ͨ�� �������������ĺ���
//���򣺴Ӵ�С
//�㷨��ѡ������
//���ԣ�char����  int����

//��������ģ��
template<typename T>
void myswap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

//�����㷨
template<typename T>
void mysort(T arr[],int len)
{
	for (int i = 0; i < len; i++)
	{
		int max = i;
		for (int j = i + 1; j < len; j++)
		{
			if (arr[max] < arr[j])
			{
				max = j;
			}
		}
		if (max != i)
		{
			myswap(arr[max], arr[i]);
		}
	}
}

//��ӡ����ģ��
template<typename T>
void printarray(T arr[],int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void test01()
{
	//����char����
	char chararr[] = { "badcfe"};
	int num = sizeof(chararr) / sizeof(char);
	mysort(chararr, num);
	printarray(chararr, num);
}

void test02()
{
	//����int����
	int intarr[] = { 7,3,2,5,8,4,2,1 };
	int num = sizeof(intarr) / sizeof(int);
	mysort(intarr, num);
	printarray(intarr, num);
}

int main()
{
	//test01();
	test02();
}