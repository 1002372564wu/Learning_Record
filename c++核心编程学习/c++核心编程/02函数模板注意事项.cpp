#include<iostream>
using namespace std;

//����ģ��ע������

template<typename T>//typename�����滻��class
void myswap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

//ע������ 1���Զ������Ƶ��������Ƶ���һ�µ���������T�ſ���ʹ��

//ע������ 2��ģ�����Ҫȷ����T���������ͣ��ſ���ʹ��
template<typename T>
void func()
{
	cout << "func�ĵ���" << endl;
}
//��ʱֻ����ʾָ��T������  
int main()
{
	func<int>();
}
