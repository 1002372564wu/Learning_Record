#include<iostream>
using namespace std;
#include<string>

//�������ʹ�������
//���߹��ԣ�
//�����ڽ������ָ���ͷ�������������
//�ڶ���Ҫ�о��庯��ʵ��

//��������
//����Ǵ����������������ڳ����࣬�޷�ʵ��������

//ps:���������û�ж������ݣ����Բ�д��������������

class Animal
{
public:
	Animal()
	{
		cout << "Animal�Ĺ��캯��" << endl;
	}

	//ʹ�����������Խ�� ����ָ���ͷ��������ʱ���ɾ�������
	/*virtual ~Animal()
	{
		cout << "Animal����������" << endl;
	}*/

	//��������  ��Ҫ����Ҳ��Ҫʵ�֣��ʹ��麯����ͬ��
	//���˴������� �����Ҳ���ڳ����� �޷�ʵ��������
	virtual ~Animal() = 0;

	//���麯��
	virtual void speak() = 0;

};

Animal::~Animal()
{
	cout << "Animal�Ĵ�����������" << endl;
}

class cat :public Animal
{
public:
	//���캯��
	cat(string name)
	{
		cout << "cat�Ĺ��캯��" << endl;
		cat_name = new string(name);
	}

	virtual void speak()
	{
		cout << *cat_name << "Сè��˵��" << endl;
	}
	string* cat_name;

	~cat()
	{
		if (cat_name != NULL)
		{
			cout << "cat����������" << endl;
			delete cat_name;
			cat_name = NULL;
		}
	}
};

void test()
{
	Animal* animal = new cat("Tom");
	animal->speak();
	//�����ָ����������ʱ�� ������������е��������� ������������ж������ԣ������ڴ�й¶
	delete animal;
}

int main()
{
	test();
}