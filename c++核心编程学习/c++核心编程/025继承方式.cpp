#include<iostream>
using namespace std;

//三种继承方式

class base
{
public:
	int A;
protected:
	int B;
private:
	int C;
};

//1、公共继承
class son1 : public base
{
public:

	void func()
	{
		A = 10;//父类的公共权限成员到子类依然是公共权限
		B = 10;//父类的保护权限成员到子类依然是保护权限
		//C = 10;//父类的私有权限成员 ，子类无法访问
	}
};
//2、保护继承
class son2 :protected base
{
public:
	void func()
	{
		A = 10;//父类中的公共成员到子类变为保护权限
		B = 10;//父类中的保护成员，到子类依然是保护权限
		C = 10;//父类的私有成员子类访问不到
	}
};
//3、私有继承
class son3 :private base
{
public:
	void func()
	{
		A = 10; //父类中的公共成员到子类变为私有权限
		B = 10; //父类中的保护成员到子类变为私有权限
		//C = 10;//父类的私有权限成员 ，子类无法访问
	}
};

void test01()
{
	son1 s1;
	s1.A = 100; // 
	//s1.B = 100; //son1中的B是保护权限，类外无法访问。
}

void test02()
{
	son2 s2;
	//s2.A = 10;//son2中的A是保护权限，类外无法访问。
	//s2.B = 10;//son2中的A是保护权限，类外无法访问。
}

void test03()
{
	son3 s3;
	//s3.A = 10;//son3中的A是私有成员，类外访问不到。
	//s3.B = 10;//son3中的A是私有成员，类外访问不到。
}

//验证一下son3中的A是私有成员
class grandson3 :public son3
{
public:
	void func()
	{
		//A = 10;  //验证了son3中的A是私有成员
	}
};