#include<iostream>
using namespace std;

class base
{
public:
	int A;
protected:
	int B;
private:
	int C;
};

class son :public base
{
public:
	int D;
};

//���ÿ�����Ա������ʾ���߲鿴����ģ��
//cd��ת���ļ�����·���� cd C:\Users\Administrator\source\repos\c++���ı��ѧϰ\c++ѧϰ��2��
//�鿴����
//cl d1 reportSingleClassLayout���� �ļ��� ������tab���룩


void test01()
{
	//16
	//�����е����зǾ�̬��Ա���Զ��ᱻ����̳���ȥ
	//˽�г�Ա����Ҳ���̳���ȥ�ˣ�ֻ�Ƿ��ʲ�������
	cout << sizeof(son) << endl;
}

int main()
{
	test01();
}