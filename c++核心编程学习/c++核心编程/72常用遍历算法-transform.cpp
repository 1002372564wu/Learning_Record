#include<iostream>
using namespace std;
#include<functional>
#include<vector>
#include<algorithm>

//搬运算法 transform    搬运的目标容器必须提前开辟空间

//仿函数
class Transform
{
public:
	int operator()(int val)
	{
		return val+1000;
	}
};

//普通函数
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

	vector<int>vt;//目标容器
	vt.resize(v.size());//目标容器需要提前开辟空间

	transform(v.begin(), v.end(), vt.begin(), Transform());

	for_each(vt.begin(), vt.end(), print01);
	cout << endl;
}

int main()
{
	test();
}