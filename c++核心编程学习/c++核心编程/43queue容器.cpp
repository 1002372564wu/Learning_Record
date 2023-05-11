#include<iostream>
using namespace std;
#include<queue>

class Person
{
public:
	Person(string name,int age)
	{
		this->m_name = name;
		this->age = age;
	}
	string m_name;
	int age;
};

void test()
{
	//创建队列
	queue<Person>q;

	//准备数据
	Person p1("科比", 24);
	Person p2("艾弗森", 3);
	Person p3("麦迪", 1);
	Person p4("卡特", 15);
	
	//入队
	q.push(p1);
	q.push(p2);
	q.push(p3);
	q.push(p4);

	//判断：只要队列不空，查看队头和队尾，出队
	while (!q.empty())
	{
		//查看队头 队尾
		cout << "队头元素—姓名：" << q.front().m_name << "年龄：" << q.front().age << endl;
		cout << "队尾元素—姓名：" << q.back().m_name << "年龄：" << q.back().age << endl;

		//出队
		q.pop();
	}
	cout << "队列大小为：" << q.size() << endl;

}

int main()
{
	test();
}