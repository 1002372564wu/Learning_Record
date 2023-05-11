#include<iostream>
using namespace std;

//多态案例二：制作饮品
class AbstractDrinking
{
public:
	//煮水
	virtual void boil() = 0;

	//冲泡
	virtual void brew() = 0;

	//倒入杯中
	virtual void pourincup() = 0;

	//加入佐料
	virtual void putsomething() = 0;

	//制作饮品
	void makedrink()
	{
		boil();
		brew();
		pourincup();
		putsomething();
	}
};

//制作咖啡
class coffee :public AbstractDrinking
{
public:
	//煮水
	virtual void boil()
	{
		cout << "煮水" << endl;
	}

	//冲泡
	virtual void brew()
	{
		cout << "冲泡咖啡" << endl;
	}

	//倒入杯中
	virtual void pourincup()
	{
		cout << "倒入杯中" << endl;
	}

	//加入佐料
	virtual void putsomething()
	{
		cout << "加入糖和牛奶" << endl;
	}
};

//制作茶叶
class tea :public AbstractDrinking
{
public:
	//煮水
	virtual void boil()
	{
		cout << "煮水" << endl;
	}

	//冲泡
	virtual void brew()
	{
		cout << "冲泡茶叶" << endl;
	}

	//倒入杯中
	virtual void pourincup()
	{
		cout << "倒入杯中" << endl;
	}

	//加入佐料
	virtual void putsomething()
	{
		cout << "加入枸杞" << endl;
	}
};

void dowork(AbstractDrinking *abs)
{
	abs->makedrink(); //多态：一个接口有多种形态
	delete abs;

}

void test()
{
	//制作咖啡
	dowork(new coffee);

	//制作茶叶
	dowork(new tea);
}

int main()
{
	test();
}