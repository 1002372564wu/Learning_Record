#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

//二元谓词
class compare
{
public:
	bool operator()(int v1, int v2)
	{
		return v1 > v2;
	}
};

void test()
{
	vector<int>v;
	v.push_back(1);
	v.push_back(4);
	v.push_back(2);
	v.push_back(3);
	v.push_back(5);

	sort(v.begin(),v.end());
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

	//使用函数对象 改变算法策略 变为排序规则为从大到小
	sort(v.begin(), v.end(), compare());

	cout << "---------------------" << endl;
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

}

int main()
{
	test();
}