#include<iostream>
using namespace std;

class Animal
{
public:
	//虚函数
	virtual void speak()
	{
		cout << "动物在说话" << endl;
	}
};

//猫类
class cat :public Animal
{
public:
	virtual void speak() //前面的virtual可写可不写
	{
		cout << "小猫在说话" << endl;
	}
};

//执行说话的函数
//地址早绑定，在编译阶段就确定了函数地址
//如果想执行让猫说话，那么这个函数地址就不能提前绑定，需要在运行阶段绑定，地址晚绑定
//动态多态满足条件
//1、有继承关系
//2、子类重写父类的虚函数
//动态多态使用：
//父类的指针或者引用 执行子类对象



void dospeak(Animal &animal)
{
	animal.speak();
}

void test01()
{
	cat c;
	dospeak(c);
}
void test02()
{
	cout << sizeof(Animal) << endl;  
}


int main()
{
	test01();

	//test02();
}