#include<iostream>
using namespace std;

//使用菱形继承带来的主要问题是：子类继承两份享同的数据，导致资源浪费以及毫无意义
//可以使用虚继承解决菱形继承问题

//动物类
class animal 
{
public:
	int age;
};

//利用虚继承 解决菱形继承的问题
// 在继承之前 加上关键字virtual变成虚继承
// animal类称为虚基类
//羊类
class sheep :virtual public animal {};

//驼类
class tuo :virtual public animal {};

//羊驼类
class sheeptuo :public sheep, public tuo
{

};

void test01()
{
	sheeptuo st;
	st.sheep::age = 18;
	st.tuo::age = 28;
	//当菱形继承，两个父类拥有相同的数据，需要加作用域以区分
	cout << st.sheep::age << endl;
	cout << st.tuo::age << endl;
	
	//使用虚继承后 可以直接访问age了
	cout << st.age << endl;

}

int main()
{
	test01();
}