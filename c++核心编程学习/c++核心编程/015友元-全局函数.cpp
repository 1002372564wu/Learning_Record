#include<iostream>
using namespace std;
#include<string>

class Building
{
	friend void goodfriend(Building* b);

public:
	Building()  // ���캯��
	{
		sitting_room = "����";
		bedroom = "����";
	}

public:
	string sitting_room;
private:
	string bedroom;
};

//ȫ�ֺ���
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