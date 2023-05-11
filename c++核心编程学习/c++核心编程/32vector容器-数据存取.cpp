#include<iostream>
using namespace std;
#include<vector>

//除了用迭代器访问vector容器中的元素，也可以用 [] 和 at 访问
//front 和 back分别返回容器中的第一个和最后一个元素。
void test()
{
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}

	//利用[]方式访问数组中的元素
	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1[i] << " ";
	}
	cout << endl;

	//利用at方式访问元素
	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1.at(i) << " ";
	}
	cout << endl;

	//获取第一个元素
	cout << v1.front() << endl;

	//返回最后一个元素
	cout << v1.back() << endl;
}

int main()
{
	test();
}