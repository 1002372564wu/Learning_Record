#include<iostream>
using namespace std;
#include<string>

class Building;

class goodboy
{
public:
	goodboy();//构造函数，在类外定义。

	void visit();//参观函数，用于访问building中的属性。在类外定义

	Building* building;

};

class Building
{
	friend class goodboy;
public:
	Building();//构造函数，在类外定义。
public:
	string sittingroom;
private:
	string bedroom;
};

//类外定义成员函数
Building::Building()
{
	sittingroom = "客厅";
	bedroom = "卧室";
}
goodboy::goodboy()
{
	building = new Building;
}
void goodboy::visit()
{
	cout << building->sittingroom << endl;

	cout << building->bedroom << endl;
}

void test01()
{
	goodboy gf;
	gf.visit();
}

int main()
{
	test01();
}
