#include<iostream>
using namespace std;

//ʹ�����μ̳д�������Ҫ�����ǣ�����̳�������ͬ�����ݣ�������Դ�˷��Լ���������
//����ʹ����̳н�����μ̳�����

//������
class animal 
{
public:
	int age;
};

//������̳� ������μ̳е�����
// �ڼ̳�֮ǰ ���Ϲؼ���virtual�����̳�
// animal���Ϊ�����
//����
class sheep :virtual public animal {};

//����
class tuo :virtual public animal {};

//������
class sheeptuo :public sheep, public tuo
{

};

void test01()
{
	sheeptuo st;
	st.sheep::age = 18;
	st.tuo::age = 28;
	//�����μ̳У���������ӵ����ͬ�����ݣ���Ҫ��������������
	cout << st.sheep::age << endl;
	cout << st.tuo::age << endl;
	
	//ʹ����̳к� ����ֱ�ӷ���age��
	cout << st.age << endl;

}

int main()
{
	test01();
}