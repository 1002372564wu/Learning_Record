#include<iostream>
using namespace std;

//thisָ������ã��ٽ�����Ƴ�ͻ �ڷ��ض�������*this
class Person
{
public:
	Person(int age)
	{
		//thisָ��ָ�򣺵��øó�Ա�����Ķ��󣬼�p1
		this->age = age;
	}

	Person& PersonAddAge(Person p) //�������õ�ԭ��Ҫ���ر��塣�������÷��ص��ǿ�����
	{
		this->age += p.age;
		return *this; //������֮�󣬴�ʱָ�����p2���塣
	}

	int age;
};

void test01()
{
	Person p1(18);
	cout << "p1�����䣺" << p1.age << endl;
}

void test02()
{
	Person p1(10);

	Person p2(10);

	//��ʽ���˼��
	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);

	cout << "p2����Ϊ��" << p2.age << endl;
}

int main()
{
	//test01();
	test02();
}