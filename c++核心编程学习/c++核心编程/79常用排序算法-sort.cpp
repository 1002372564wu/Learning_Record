#include<iostream>
using namespace std;
#include<functional>
#include<vector>
#include<algorithm>

//�����㷨 sort

//�º���
class print
{
public:
	void operator()(int val)
	{
		cout << val;
	}
};

void test()
{
	vector<int>v;
	v.push_back(1);
	v.push_back(3);
	v.push_back(5);
	v.push_back(4);
	v.push_back(6);
	v.push_back(7);
	v.push_back(2);

	//����sort����
	sort(v.begin(), v.end());//����������������Ĭ�ϴ�С����

	for_each(v.begin(), v.end(), print());
	cout << endl;

	sort(v.begin(), v.end(),greater<int>());//�������������ڽ���������

	for_each(v.begin(), v.end(), print());
}

int main()
{
	test();
}