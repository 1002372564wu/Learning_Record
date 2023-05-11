#include<iostream>
using namespace std;

//重载递增运算符  tips:前置递增返回引用，后置递增返回值。

//自定义整型
class Integer
{
	friend ostream& operator<< (ostream& cout, Integer myint);
public:
	Integer()
	{
		num = 0;
	}

	//重载前置++运算符  返回引用是为了一直对一个数据进行递增操作。
	Integer& operator++()
	{
		//先进行++运算，再将自身返回
		num++;
		return *this;
	}
	//重载后置++运算符  int代表占位参数，用于区分前置和后置
	Integer operator++(int)//此时不要加引用，因为temp是个局部对象，它在当前函数执行完后就被释放了。
	{
		Integer temp = *this;
		num++;
		return temp;
	}

private:
	int num;
};

//重载左移运算符
ostream& operator<< (ostream & cout, Integer myint)
{
	cout << myint.num << endl;
	return cout;
}

void test01()
{
	Integer myint;
	cout << ++myint << endl;
}
void test02()
{
	Integer myint;
	cout << myint++ << endl;
	cout << myint << endl;
}
int main()
{
	test02();
}