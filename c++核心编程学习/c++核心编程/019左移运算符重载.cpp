#include<iostream>
using namespace std;

//�������������

class Person
{
	friend ostream& operator<<(ostream& cout, Person& p);
public:
	Person(int a, int b)
	{
		A = a;
		B = b;
	}
private:
	int A;
	int B;
};

//��ȫ�ֺ����������������
//���ʣ�operator<<(cout,p)  �򻯣�cout<<p
ostream & operator<<(ostream &cout, Person& p)
{
	cout << p.A << endl << p.B;
	return cout;
}

void test01()
{
	Person p(10,10);
	//��ʽ���
	cout << p <<endl;
}

int main()
{
	test01();
}