#include<iostream>
using namespace std;

//��ָ����ó�Ա����

class Person
{
public:
	void showClassName()
	{
		cout << "this is person class" << endl;
	}
	void showPersonAge()
	{
		//����ԭ�򣺴����ָ��ʽ��NULL Ϊ�˲�������Լ�һ��if��䣺
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