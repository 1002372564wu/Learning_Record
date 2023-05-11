#include<iostream>
using namespace std;
#include<vector>

//vector数据结构和数组非常相似  也成为单端数组
//vector与普通数组的区别：数组是静态空间，vector可以动态扩展

//动态扩展：不是在原空间之后续接新空间，而是找更大的内存空间，然后将原数据拷贝新空间，释放原空间
//vector容器的迭代器是支持随机访问的迭代器


void printVector(vector<int> &v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//vector容器构造
void test()
{
	vector<int> v1; //默认构造 无参构造
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printVector(v1);

	//通过区间方式进行构造
	vector<int>v2(v1.begin(), v1.end());
	printVector(v2);

	//n个elem方式构造
	vector<int>v3(10, 100); //10个100
	printVector(v3);

	//拷贝构造
	vector<int>v4(v3);
	printVector(v4);
}

int main()
{
	test();
}