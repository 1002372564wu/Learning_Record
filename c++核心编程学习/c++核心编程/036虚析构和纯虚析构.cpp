#include<iostream>
using namespace std;
#include<string>

//虚析构和纯虚析构
//两者共性：
//①用于解决父类指针释放子类对象的问题
//②都需要有具体函数实现

//两者区别：
//如果是纯虚析构，该类属于抽象类，无法实例化对象

//ps:如果子类中没有堆区数据，可以不写虚析构或纯虚析构

class Animal
{
public:
	Animal()
	{
		cout << "Animal的构造函数" << endl;
	}

	//使用虚析构可以解决 父类指针释放子类对象时不干净的问题
	/*virtual ~Animal()
	{
		cout << "Animal的析构函数" << endl;
	}*/

	//纯虚析构  需要声明也需要实现（和纯虚函数不同）
	//有了纯虚析构 这个类也属于抽象类 无法实例化对象
	virtual ~Animal() = 0;

	//纯虚函数
	virtual void speak() = 0;

};

Animal::~Animal()
{
	cout << "Animal的纯虚析构函数" << endl;
}

class cat :public Animal
{
public:
	//构造函数
	cat(string name)
	{
		cout << "cat的构造函数" << endl;
		cat_name = new string(name);
	}

	virtual void speak()
	{
		cout << *cat_name << "小猫在说话" << endl;
	}
	string* cat_name;

	~cat()
	{
		if (cat_name != NULL)
		{
			cout << "cat的析构函数" << endl;
			delete cat_name;
			cat_name = NULL;
		}
	}
};

void test()
{
	Animal* animal = new cat("Tom");
	animal->speak();
	//父类的指针在析构的时候 不会调用子类中的析构函数 导致子类如果有堆区属性，出现内存泄露
	delete animal;
}

int main()
{
	test();
}