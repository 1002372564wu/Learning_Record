#include<iostream>
using namespace std;
#include<vector>

//swap() 以及 其巧用：内存收缩


void printVector(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//1、基本使用
void test01()
{
	cout << "交换前：" << endl;
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printVector(v1);

	vector<int> v2;
	for (int i = 10; i > 0; i--)
	{
		v2.push_back(i);
	}
	printVector(v2);

	cout << "交换后：" << endl;
	v1.swap(v2);
	printVector(v1);
	printVector(v2);
}

//2、实际用途
//巧用swap可以收缩内存空间
void test02()
{
	vector<int> v;
	for (int i = 0; i < 100000; i++)
	{
		v.push_back(i);
	}
	cout << "v的容量为：" << v.capacity() << endl;
	cout << "v的大小为：" << v.size() << endl;

	v.resize(3);//重新指定大小
	cout << "v的容量为：" << v.capacity() << endl;
	cout << "v的大小为：" << v.size() << endl;

	//巧用swap收缩内存
	vector<int>(v).swap(v);
	//原理：vector<int>(v)创建一个匿名对象，此时它的容量和大小都是3，
	//再用swap将其和v做一个交换，v的容量和大小就变成3了，匿名对象也被系统自动销毁了。
	cout << "v的容量为：" << v.capacity() << endl;
	cout << "v的大小为：" << v.size() << endl;
} 

int main()
{
	//test01();
	test02();
}

