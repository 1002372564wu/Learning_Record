#include<iostream>
using namespace std;

class Animal
{
public:
	//�麯��
	virtual void speak()
	{
		cout << "������˵��" << endl;
	}
};

//è��
class cat :public Animal
{
public:
	virtual void speak() //ǰ���virtual��д�ɲ�д
	{
		cout << "Сè��˵��" << endl;
	}
};

//ִ��˵���ĺ���
//��ַ��󶨣��ڱ���׶ξ�ȷ���˺�����ַ
//�����ִ����è˵������ô���������ַ�Ͳ�����ǰ�󶨣���Ҫ�����н׶ΰ󶨣���ַ���
//��̬��̬��������
//1���м̳й�ϵ
//2��������д������麯��
//��̬��̬ʹ�ã�
//�����ָ��������� ִ���������



void dospeak(Animal &animal)
{
	animal.speak();
}

void test01()
{
	cat c;
	dospeak(c);
}
void test02()
{
	cout << sizeof(Animal) << endl;  
}


int main()
{
	test01();

	//test02();
}