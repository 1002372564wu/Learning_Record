#include<iostream>
using namespace std;
#include<string>

class Building;

class goodboy
{
public:
	goodboy();//���캯���������ⶨ�塣

	void visit();//�ιۺ��������ڷ���building�е����ԡ������ⶨ��

	Building* building;

};

class Building
{
	friend class goodboy;
public:
	Building();//���캯���������ⶨ�塣
public:
	string sittingroom;
private:
	string bedroom;
};

//���ⶨ���Ա����
Building::Building()
{
	sittingroom = "����";
	bedroom = "����";
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
