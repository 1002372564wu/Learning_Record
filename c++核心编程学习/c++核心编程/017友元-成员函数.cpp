#include<iostream>
using namespace std;
#include<string>

class Building;

class goodboy
{
public:
	goodboy();//构造函数，在类外定义。

	void visit();//让visit函数可以访问Building中的私有成员。
	void visit2();// 不让visit2函数可以访问Building中的私有成员。
	Building* building;

};

class Building
{
	friend void goodboy::visit();
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
void goodboy::visit2()
{
	cout << building->sittingroom << endl;
	// out << building->bedroom << endl; 无法访问
}

void test01()
{
	goodboy gf;
	gf.visit();
	gf.visit2();
}
int main()
{
	test01();
}