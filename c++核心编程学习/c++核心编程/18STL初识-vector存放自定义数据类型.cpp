#include<iostream>
using namespace std;
#include<vector>

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

void test01()
{
	vector<Person> v;
	Person p1("aaa", 10);
	Person p2("bbb", 20);
	Person p3("ccc", 30);
	Person p4("ddd", 40);
	Person p5("eee", 50);

	//向容器中添加数据
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	//遍历容器中的数据
	for (vector<Person>::iterator it = v.begin();it!=v.end();it++)
	{
		//将it解引用后 返回一个Person类对象  故可以使用 .来访问其属性
		//cout << "姓名：" << (*it).m_name << " 年龄：" << (*it).m_age << endl;  

		//it本质是个指针，故可以通过->来访问其属性
		cout << "姓名：" << it->m_name << " 年龄：" << it->m_age << endl;
	}
}

//存放自定义数据类型 指针
void test02()
{
	vector<Person*> v;
	Person p1("aaa", 10);
	Person p2("bbb", 20);
	Person p3("ccc", 30);
	Person p4("ddd", 40);
	Person p5("eee", 50);

	//向容器中添加数据
	v.push_back(&p1);
	v.push_back(&p2);
	v.push_back(&p3);
	v.push_back(&p4);
	v.push_back(&p5);

	//遍历容器
	for (vector<Person*>::iterator it = v.begin(); it != v.end(); it++)
	{
		//cout << "姓名：" << (*it)->m_name << " 年龄：" << (*it)->m_age << endl;

		//*it是一个Person指针，**it相当于解引用，即Person对象
		cout << "姓名：" << (**it).m_name << " 年龄：" << (**it).m_age << endl;
	}
}

int main()
{
	//test01();
	test02();
}