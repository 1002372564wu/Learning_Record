#include<iostream>
using namespace std;

//空指针调用成员函数

class Person
{
public:
	void showClassName()
	{
		cout << "this is person class" << endl;
	}
	void showPersonAge()
	{
		//报错原因：传入的指针式是NULL 为了不报错可以加一条if语句：
		if (this == NULL)
		{
			return;
		}
		cout << "age=" << age << endl;
	}
	int age = 0;
};

void test01()
{
	Person* p = NULL;
	//p->showClassName();
	p->showPersonAge();
}

int main()
{
	test01();
}