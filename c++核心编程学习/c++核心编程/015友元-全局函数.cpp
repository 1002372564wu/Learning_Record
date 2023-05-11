#include<iostream>
using namespace std;
#include<string>

class Building
{
	friend void goodfriend(Building* b);

public:
	Building()  // 构造函数
	{
		sitting_room = "客厅";
		bedroom = "卧室";
	}

public:
	string sitting_room;
private:
	string bedroom;
};

//全局函数
void goodfriend(Building* b)
{
	cout << b->sitting_room << endl;

	cout << b->bedroom << endl;
}

void test01()
{
	Building building;
	goodfriend(&building);
}

int main()
{
	test01();
}