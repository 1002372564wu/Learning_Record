#include<iostream>
using namespace std;

//���ص��������  tips:ǰ�õ����������ã����õ�������ֵ��

//�Զ�������
class Integer
{
	friend ostream& operator<< (ostream& cout, Integer myint);
public:
	Integer()
	{
		num = 0;
	}

	//����ǰ��++�����  ����������Ϊ��һֱ��һ�����ݽ��е���������
	Integer& operator++()
	{
		//�Ƚ���++���㣬�ٽ�������
		num++;
		return *this;
	}
	//���غ���++�����  int����ռλ��������������ǰ�úͺ���
	Integer operator++(int)//��ʱ��Ҫ�����ã���Ϊtemp�Ǹ��ֲ��������ڵ�ǰ����ִ�����ͱ��ͷ��ˡ�
	{
		Integer temp = *this;
		num++;
		return temp;
	}

private:
	int num;
};

//�������������
ostream& operator<< (ostream & cout, Integer myint)
{
	cout << myint.num << endl;
	return cout;
}

void test01()
{
	Integer myint;
	cout << ++myint << endl;
}
void test02()
{
	Integer myint;
	cout << myint++ << endl;
	cout << myint << endl;
}
int main()
{
	test02();
}