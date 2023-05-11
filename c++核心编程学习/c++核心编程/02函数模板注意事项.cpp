#include<iostream>
using namespace std;

//函数模板注意事项

template<typename T>//typename可以替换成class
void myswap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

//注意事项 1、自动类型推导：必须推导出一致的数据类型T才可以使用

//注意事项 2、模板必须要确定出T的数据类型，才可以使用
template<typename T>
void func()
{
	cout << "func的调用" << endl;
}
//此时只能显示指定T的类型  
int main()
{
	func<int>();
}
