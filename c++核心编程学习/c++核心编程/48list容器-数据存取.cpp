#include<iostream>
using namespace std;
#include<list>

void test()
{
	list<int>L;
	L.push_back(10);
	L.push_back(20);
	L.push_back(30);
	L.push_back(40);

	//L1[0] ��������[]����list�����е�Ԫ�� 
	//ԭ��list�����������������������Կռ�洢���ݣ�������Ҳ�ǲ�֧��������ʵ�
	
	cout << "��һ��Ԫ�أ�" << L.front() << endl;
	cout << "���һ��Ԫ�أ�" << L.back() << endl;

	list<int>::iterator it = L.begin();
	it++;
	it--;//����++��--˵��֧��˫�����

	it = it + 1;//��֧���������
}

int main()
{
	test();
}