#include<iostream>
using namespace std;
#include<deque>

//�����ɾ���ṩ��λ���ǵ�������
//β��-push_back
//βɾ-pop_back
//ͷ��-push_front
//ͷɾ-pop_front

void printdeque(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		//*it = 100; ����const���������е����ݲ������޸� 
		cout << *it << " ";
	}
	cout << endl;
}

void test()
{
	deque<int>d1;
	//β��
	d1.push_back(10);
	d1.push_back(20);

	//ͷ��
	d1.push_front(100);
	d1.push_front(200);

	printdeque(d1);

	//βɾ
	d1.pop_back();
	printdeque(d1);

	//ͷɾ
	d1.pop_front();
	printdeque(d1);
}

void test02()
{
	deque<int>d1;
	d1.push_back(10);
	d1.push_back(20);
	d1.push_front(100);
	d1.push_front(200);

	printdeque(d1);

	//��insert����
	d1.insert(d1.begin(), 1000);
	printdeque(d1);
	d1.insert(d1.begin(), 2,10000);
	printdeque(d1);

	//����������в���
	deque<int>d2;
	d2.push_back(1);
	d2.push_back(2);
	d2.push_back(3);
	d1.insert(d1.begin(), d2.begin(), d2.end());
	printdeque(d2);
	printdeque(d1);
}

void test03()
{
	deque<int>d1;
	d1.push_back(10);
	d1.push_back(20);
	d1.push_front(100);
	d1.push_front(200);

	//ɾ��
	deque<int>::iterator it = d1.begin();
	it++;
	d1.erase(it);
	printdeque(d1);

	//�������䷽ʽɾ��
	d1.erase(d1.begin() + 1, d1.end());
	printdeque(d1);

	//���
	d1.clear();
	printdeque(d1);

}

int main()
{
	//test();
	//test02();
	test03();
}