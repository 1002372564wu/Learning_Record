#include<iostream>
using namespace std;
#include<string>

// 模板并不是万能的 有些特定的数据类型 需要用具体化方式做特殊实现
// 利用具体化的模板，可以解决自定义类型的通用化
// ps：学习模板并不是为了写模板，而是在STL能够运用系统提供的模板


//对比两个数据是否相等的函数

class Person
{
public:
	Person(string name, int age)
	{
		this->m_name = name;
		this->m_age = age;
	}

	string m_name;
	int m_age;
};

template<class T>
bool compare(T& a, T& b)
{
	if (a == b)
	{
		return true;
	}
	else
	{
		return false;
	}
}

//利用具体化Person的版本实现代码，具体化优先调用
template<> bool compare(Person& a, Person& b)
{
	if (a.m_name == b.m_name && a.m_age == b.m_age)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void test()
{
	Person p1("Tom", 10);
	Person p2("Tom", 10);

	bool ret = compare(p1, p2);

	cout << ret << endl;
}

int main()
{
	test();
}