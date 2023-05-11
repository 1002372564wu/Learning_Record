#include<iostream>
using namespace std;

//浅拷贝的问题:堆区的内存会重复释放，这是一个非法操作
//解决办法：利用深拷贝解决：自己写一个拷贝构造函数，重新在堆区申请一块内存，避免堆区内存重复释放的问题。

class Person
{
public:
	//普通构造函数
	Person()     //无参
	{
		cout << "Person的默认构造函数调用" << endl;
	}
	Person(int a,int h)//有参
	{
		age = a;
		height=new int(h);
		cout << "Person的有参构造函数调用" << endl;
	}
	//自己写一个拷贝构造函数，重新在堆区申请一块内存，避免堆区内存重复释放的问题。
	Person(const Person& p)
	{
		cout << "Person拷贝构造函数的调用" << endl;
		age = p.age;
		//height = p.height;编译器默认实现的就是这行代码
		//深拷贝操作
		height = new int(*p.height);
	}
	//析构函数
	~Person()
	{
		//析构函数通常用于将堆区开辟的数据做释放操作。
		if (height != NULL)
		{
			delete height;
			height = NULL;//防止野指针的出现
		}
		cout << "Person的析构函数调用" << endl;
	}

	int age;
	int* height;
};

void test01()
{
	Person p1(18,180);
	cout << "p1年龄：" << p1.age << " 身高："<<*p1.height<<endl;
	Person p2(p1); //利用编译器默认的拷贝构造函数，此时为浅拷贝操作。
	cout << "p1年龄：" << p2.age << " 身高："<<*p2.height << endl;
}

int main()
{
	test01();
}