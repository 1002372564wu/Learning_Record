#include<iostream>
using namespace std;

//javaҳ��
class BasePage
{
public:
	void header()
	{
		cout << "��ҳ�������Ρ���½��ע��...������ͷ����" << endl;
	}
	void footer()
	{
		cout << "�������ġ�����������վ�ڵ�ͼ...�������ײ���" << endl;
	}
	void left()
	{
		cout << "java��python��c++��...�����������б�" << endl;
	}
};

//�̳еĺô��������ظ�����
//�﷨�� class ���ࣺ �̳з�ʽ ����
//���� Ҳ��Ϊ ������
//���� Ҳ��Ϊ ����
class java : public BasePage
{
public:
	void content()
	{
		cout << "javaѧ����Ƶ" << endl;
	}
};



void test01()
{
	cout << "java������Ƶҳ�����£�" << endl;
	java ja;
	ja.header();
	ja.footer();
	ja.left();
	ja.content();
}

int main()
{
	test01();
}