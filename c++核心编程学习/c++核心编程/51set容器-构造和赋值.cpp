#include<iostream>
using namespace std;
#include<set>

//set����������Ԫ�ػ��ڲ���ʱ�Զ�������
//set/multiset ���ڹ���ʽ�������ײ�ṹʹ�ö�����ʵ��
//set��multiset����set���������ظ�Ԫ�أ�multiset������

void printset(set<int>& s)
{
	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test()
{
	set<int>s;

	//�������� ֻ��insert��ʽ
	s.insert(10);
	s.insert(40);
	s.insert(30);
	s.insert(20);
	s.insert(10);
	s.insert(10);

	printset(s);

	//��������
	set<int>s2(s);
	printset(s2);

	//��ֵ
	set<int>s3;
	s3 = s2;
	printset(s3);

}

int main()
{
	test();
}