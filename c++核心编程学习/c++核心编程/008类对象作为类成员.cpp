#include<iostream>
using namespace std;
#include<string>

//当其他类对象作为本类成员，构造的时候先构造其他类对象，再构造自身。
//析构函数的调用顺序相反。
class Phone
{
public:
	//构造函数
	Phone(string name)
	{
		p_name = name;
		cout << "Phone的构造函数调用" << endl;
	}
	~Phone()
	{
		cout<< "Phone的析构函数调用" << endl;
	}
	//成员属性
	string p_name;
};


class Person
{
public:
	//构造函数
	Person(string name, string pname) :m_name(name), m_phone(pname)
	{
		cout << "Person的构造函数调用" << endl;
	};
	~Person()
	{
		cout << "Person的析构函数调用" << endl;
	}
	//成员属性
	string m_name;
	Phone m_phone;

};

void test01()
{
	Person p("吴华杰", "小米9pro");
	cout << p.m_name << p.m_phone.p_name << endl;
}

int main()
{
	test01();
}