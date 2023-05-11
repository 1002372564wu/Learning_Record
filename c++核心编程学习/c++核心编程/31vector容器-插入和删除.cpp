#include<iostream>
using namespace std;
#include<vector>

//尾插    尾删 
//两种插入操作  两种删除操作  清空操作

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
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);
	v1.push_back(4);
	v1.push_back(5);

	//遍历
	printVector(v1);

	//尾删
	v1.pop_back();
	printVector(v1);

	//插入
	v1.insert(v1.begin(), 100); //第一个参数是迭代器
	printVector(v1);

	v1.insert(v1.begin()+1 , 5, 1000);
	printVector(v1);

	//删除 参数也是迭代器
	v1.erase(v1.begin());
	printVector(v1);

	//两种清空方式
	// v1.erase(v1.begin(), v1.end()); 
	v1.clear();
	printVector(v1); 
}

int main()
{
	test();
}