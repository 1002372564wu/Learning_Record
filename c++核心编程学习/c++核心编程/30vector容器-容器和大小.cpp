#include<iostream>
using namespace std;
#include<vector>

//empty() �ж������Ƿ�Ϊ��
//capacity() ����������
//size() ������Ԫ�صĸ���
//resize(int num) ����ָ�������ĳ���
//reseze(int num��elem) ���ذ汾������ָ����λ�õ�Ԫ��

void printVector(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test()
{
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printVector(v1);

	//�ж�
	if (v1.empty())
	{
		cout << "v1Ϊ��" << endl;
	}
	else
	{
		cout << "v1��Ϊ��" << endl;
		cout << "v1��������" << v1.capacity() << endl;
		cout << "v1�Ĵ�С��" << v1.size() << endl;
	}

	//����ָ����С
	v1.resize(15,100);//������Ĳ���Ĭ��Ϊ0��Ҳ�����Լ�ָ��
	printVector(v1);

	v1.resize(5);//�������ָ���ı�ԭ���̣��򳬳��Ĳ��ֻ�ɾ��
	printVector(v1);
}

int main()
{
	test();
}