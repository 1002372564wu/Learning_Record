#include<iostream>
using namespace std;
#include<string>

//如果父类是类模板，子类需要指定出父类中T的数据类型

template<class T>
class Base
{
public:
	T m;
};

class Son :public Base<int>  //1、子类继承时必须知道父类中的T类型，才能继承
{

};

//2、如果想灵活指定父类中T的类型，则子类也需要变类模板
template<class T1,class T2>
class Son2 :public Base<T1>
{
public:
	Son2()
	{
		cout << "T1的类型为：" << typeid(T1).name() << endl;
		cout << "T2的类型为：" << typeid(T2).name() << endl;
	}
	T2 obj;
};

void test()
{
	Son2<int, char>S2;
}

int main()
{
	test();
}