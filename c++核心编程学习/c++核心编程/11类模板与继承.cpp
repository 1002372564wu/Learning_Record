#include<iostream>
using namespace std;
#include<string>

//�����������ģ�壬������Ҫָ����������T����������

template<class T>
class Base
{
public:
	T m;
};

class Son :public Base<int>  //1������̳�ʱ����֪�������е�T���ͣ����ܼ̳�
{

};

//2����������ָ��������T�����ͣ�������Ҳ��Ҫ����ģ��
template<class T1,class T2>
class Son2 :public Base<T1>
{
public:
	Son2()
	{
		cout << "T1������Ϊ��" << typeid(T1).name() << endl;
		cout << "T2������Ϊ��" << typeid(T2).name() << endl;
	}
	T2 obj;
};

void test()
{
	Son2<int, char>S2;
}

int main()
{
	test();
}