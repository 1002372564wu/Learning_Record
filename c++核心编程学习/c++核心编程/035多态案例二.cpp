#include<iostream>
using namespace std;

//��̬��������������Ʒ
class AbstractDrinking
{
public:
	//��ˮ
	virtual void boil() = 0;

	//����
	virtual void brew() = 0;

	//���뱭��
	virtual void pourincup() = 0;

	//��������
	virtual void putsomething() = 0;

	//������Ʒ
	void makedrink()
	{
		boil();
		brew();
		pourincup();
		putsomething();
	}
};

//��������
class coffee :public AbstractDrinking
{
public:
	//��ˮ
	virtual void boil()
	{
		cout << "��ˮ" << endl;
	}

	//����
	virtual void brew()
	{
		cout << "���ݿ���" << endl;
	}

	//���뱭��
	virtual void pourincup()
	{
		cout << "���뱭��" << endl;
	}

	//��������
	virtual void putsomething()
	{
		cout << "�����Ǻ�ţ��" << endl;
	}
};

//������Ҷ
class tea :public AbstractDrinking
{
public:
	//��ˮ
	virtual void boil()
	{
		cout << "��ˮ" << endl;
	}

	//����
	virtual void brew()
	{
		cout << "���ݲ�Ҷ" << endl;
	}

	//���뱭��
	virtual void pourincup()
	{
		cout << "���뱭��" << endl;
	}

	//��������
	virtual void putsomething()
	{
		cout << "�������" << endl;
	}
};

void dowork(AbstractDrinking *abs)
{
	abs->makedrink(); //��̬��һ���ӿ��ж�����̬
	delete abs;

}

void test()
{
	//��������
	dowork(new coffee);

	//������Ҷ
	dowork(new tea);
}

int main()
{
	test();
}