#include<iostream>
using namespace std;
#include<vector>

//����������ϴ󣬿���һ��ʼ����reserveԤ���ռ䡣

void test()
{
	vector<int> v;

	//����reserveԤ���ռ�
	v.reserve(100000); //�����Ԥ�� ��vector��Ҫ����30�οռ�

	int num = 0;//ͳ�ƿ��ٴ���
	int* p = NULL;
	for (int i = 0; i < 100000; i++)
	{
		v.push_back(i);
		if (p != &v[0])
		{
			p = &v[0];
			num++;
		}
	}
	cout << num << endl;
}

int main()
{
	test();
}