#include<iostream>
using namespace std;

//在真实开发中 提倡“开闭原则”。
// 开闭原则：对扩展进行开放，对修改进行关闭。

//用多态技术实现计算器
//使用多态的好处：
//1、组织结构清晰
//2、可读性强
//3、对于前期和后期扩展以及维护性高

//实现计算器抽象类(基类)
class AbstractCalculator
{
public:
	virtual int getresult()
	{
		return 0;
	}
	int num1;
	int num2;
};

//加法计算器类
class AddCalculator:public AbstractCalculator
{
public:
	virtual int getresult()
	{
		return num1 + num2;
	}
};

//减法计算器类
class SubCalculator :public AbstractCalculator
{
public:
	virtual int getresult()
	{
		return num1 - num2;
	}
};

//乘法计算器类
class MulCalculator :public AbstractCalculator
{
public:
	virtual int getresult()
	{
		return num1 * num2;
	}
};

void test()
{
	//多态使用条件：父类指针或者引用指向子类对象

	//加法运算
	AbstractCalculator* abc = new AddCalculator;
	abc->num1 = 100;
	abc->num2 = 100;
	cout << abc->getresult() << endl;
	//用完后记得销毁new的空间
	delete abc;

	//减法运算
	abc = new SubCalculator;
	abc->num1 = 100;
	abc->num2 = 100;
	cout << abc->getresult() << endl;
	delete abc;
}

int main()
{
	test();
}