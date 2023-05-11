#include<iostream>
using namespace std;

//java页面
class BasePage
{
public:
	void header()
	{
		cout << "首页、公开课、登陆、注册...（公共头部）" << endl;
	}
	void footer()
	{
		cout << "帮助中心、交流合作、站内地图...（公共底部）" << endl;
	}
	void left()
	{
		cout << "java、python、c++、...（公共分类列表）" << endl;
	}
};

//继承的好处：减少重复代码
//语法： class 子类： 继承方式 父类
//子类 也称为 派生类
//父类 也称为 基类
class java : public BasePage
{
public:
	void content()
	{
		cout << "java学科视频" << endl;
	}
};



void test01()
{
	cout << "java下载视频页面如下：" << endl;
	java ja;
	ja.header();
	ja.footer();
	ja.left();
	ja.content();
}

int main()
{
	test01();
}