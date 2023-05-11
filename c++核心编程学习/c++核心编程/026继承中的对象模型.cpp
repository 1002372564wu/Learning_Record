#include<iostream>
using namespace std;

class base
{
public:
	int A;
protected:
	int B;
private:
	int C;
};

class son :public base
{
public:
	int D;
};

//利用开发人员命令提示工具查看对象模型
//cd跳转到文件具体路径： cd C:\Users\Administrator\source\repos\c++核心编程学习\c++学习（2）
//查看命名
//cl d1 reportSingleClassLayout类名 文件名 （可用tab补齐）


void test01()
{
	//16
	//父类中的所有非静态成员属性都会被子类继承下去
	//私有成员属性也被继承下去了，只是访问不到而已
	cout << sizeof(son) << endl;
}

int main()
{
	test01();
}