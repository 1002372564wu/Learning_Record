#include<iostream>
using namespace std;
#include<functional>
#include<vector>
#include<algorithm>

//�����㷨 transform    ���˵�Ŀ������������ǰ���ٿռ�

//�º���
class Transform
{
public:
	int operator()(int val)
	{
		return val+1000;
	}
};

//��ͨ����
void print01(int val)
{
	cout << val << " ";
}

void test()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	vector<int>vt;//Ŀ������
	vt.resize(v.size());//Ŀ��������Ҫ��ǰ���ٿռ�

	transform(v.begin(), v.end(), vt.begin(), Transform());

	for_each(vt.begin(), vt.end(), print01);
	cout << endl;
}

int main()
{
	test();
}