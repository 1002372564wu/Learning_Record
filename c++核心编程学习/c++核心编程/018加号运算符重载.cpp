#include<iostream>
using namespace std;

//�Ӻ����������

class Person
{
public:

	//1����Ա��������+��
	/*Person operator+(Person& p)
	{
		Person temp;
		temp.A = this->A + p.A;
		temp.B = this->B + p.B;
		return temp;
	}*/
	//��Ա�������صı��ʣ�
	//Person p3 = p1.operator+(p2)
	int A;
	int B;
};

//2��ȫ�ֺ�������+��,����Ϊ��
//Person p3 = operator+(p1,p2)
Person operator+(Person& p1, Person& p2)
{
	Person temp;
	temp.A = p1.A + p2.A;
	temp.B = p1.B + p2.B;
	return temp;
}

void test01()
{
	Person p1;
	p1.A = 10;
	p1.B = 10;
	Person p2;
	p2.A = 10;
	p2.B = 10;
	Person p3;
	p3 = p1 + p2;

	cout << p3.A << endl;
	cout << p3.B << endl;
}

int main()
{
	test01();
}

