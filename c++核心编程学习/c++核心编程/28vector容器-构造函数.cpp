#include<iostream>
using namespace std;
#include<vector>

//vector���ݽṹ������ǳ�����  Ҳ��Ϊ��������
//vector����ͨ��������������Ǿ�̬�ռ䣬vector���Զ�̬��չ

//��̬��չ��������ԭ�ռ�֮�������¿ռ䣬�����Ҹ�����ڴ�ռ䣬Ȼ��ԭ���ݿ����¿ռ䣬�ͷ�ԭ�ռ�
//vector�����ĵ�������֧��������ʵĵ�����


void printVector(vector<int> &v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//vector��������
void test()
{
	vector<int> v1; //Ĭ�Ϲ��� �޲ι���
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printVector(v1);

	//ͨ�����䷽ʽ���й���
	vector<int>v2(v1.begin(), v1.end());
	printVector(v2);

	//n��elem��ʽ����
	vector<int>v3(10, 100); //10��100
	printVector(v3);

	//��������
	vector<int>v4(v3);
	printVector(v4);
}

int main()
{
	test();
}