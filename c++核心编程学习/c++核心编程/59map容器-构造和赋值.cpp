#include<iostream>
using namespace std;
#include<map>

//map����
//��map����������Ԫ�ض���pair ��һ��Ԫ��Ϊkey����ֵ�����ڶ���Ԫ��Ϊvalue��ʵֵ��
//������Ԫ�ػ����Ԫ�صļ�ֵ�Զ�����
//���ʣ�map/mutilmap���ڹ���ʽ�������ײ�ṹ���ö�����ʵ��
//ps��map��������Ԫ�ض��ǳɶԳ��֣���������ʱҪʹ�ö���

void printmap(map<int, int>& m)
{
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key = " << (*it).first << "value = " << it->second << endl;
	}
	cout << endl;
}

void test()
{
	map<int, int>m;

	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(3, 20));
	m.insert(pair<int, int>(2, 30));
	m.insert(pair<int, int>(4, 40));

	printmap(m);

	//��������
	map<int, int>m2(m);
	printmap(m2);

	//��ֵ
	map<int,int>m3;
	m3 = m2;
	printmap(m3);
}

int main()
{
	test();
}