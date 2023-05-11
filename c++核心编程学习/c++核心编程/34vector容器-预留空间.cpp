#include<iostream>
using namespace std;
#include<vector>

//如果数据量较大，可以一开始利用reserve预留空间。

void test()
{
	vector<int> v;

	//利用reserve预留空间
	v.reserve(100000); //如果不预留 则vector需要开辟30次空间

	int num = 0;//统计开辟次数
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