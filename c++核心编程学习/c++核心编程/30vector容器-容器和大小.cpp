#include<iostream>
using namespace std;
#include<vector>

//empty() 判断容器是否为空
//capacity() 容器的容量
//size() 容器中元素的个数
//resize(int num) 重新指定容器的长度
//reseze(int num，elem) 重载版本，可以指定新位置的元素

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
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printVector(v1);

	//判断
	if (v1.empty())
	{
		cout << "v1为空" << endl;
	}
	else
	{
		cout << "v1不为空" << endl;
		cout << "v1的容量：" << v1.capacity() << endl;
		cout << "v1的大小：" << v1.size() << endl;
	}

	//重新指定大小
	v1.resize(15,100);//多出来的部分默认为0，也可以自己指定
	printVector(v1);

	v1.resize(5);//如果重新指定的比原来短，则超出的部分会删除
	printVector(v1);
}

int main()
{
	test();
}