#include<iostream>
using namespace std;
#include<string>

//�����������������

class My_print
{
public:
	//�����������������
	void operator()(string test)
	{
		cout << test << endl;
	}

};

void test01()
{
	My_print myprint;
	myprint("jay");   // ����ʹ�������ǳ������ں������ã����Ҳ��Ϊ�º���
}

//�º����ǳ���û�й̶���д����
//�ӷ���
class myadd
{
public:
	int operator()(int n1, int n2)
	{
		return n1 + n2;
	}
};
void test02()
{
	myadd ma;
	int ret = ma(100, 200);
	cout << ret << endl;

	//������������
	cout << myadd()(100, 300) << endl;
}


int main()
{
	test01();
	test02();
}