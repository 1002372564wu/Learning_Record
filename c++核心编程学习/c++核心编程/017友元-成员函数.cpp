#include<iostream>
using namespace std;
#include<string>

class Building;

class goodboy
{
public:
	goodboy();//���캯���������ⶨ�塣

	void visit();//��visit�������Է���Building�е�˽�г�Ա��
	void visit2();// ����visit2�������Է���Building�е�˽�г�Ա��
	Building* building;

};

class Building
{
	friend void goodboy::visit();
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
void goodboy::visit2()
{
	cout << building->sittingroom << endl;
	// out << building->bedroom << endl; �޷�����
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