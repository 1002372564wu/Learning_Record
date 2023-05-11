#include<iostream>
using namespace std;
#include<string>
#include<vector>
#include<map>
#include<ctime>

#define CEHUA 0
#define MEISHU 1
#define YANFA 2

class worker
{
public:
	string m_name;
	int m_salary;
};

void createworker(vector<worker>&v)
{
	string nameseed = "ABCDEFGHIJ";
	for (int i = 0; i < 10; i++)
	{
		worker worker;
		worker.m_name = "Ա��";
		worker.m_name += nameseed[i];

		worker.m_salary = rand() % 10000 + 10000;//10000-19999

		//��Ա������������
		v.push_back(worker);
	}

}

void setgroup(vector<worker>&v,multimap<int,worker>&m)
{
	for (vector<worker>::iterator it = v.begin(); it != v.end(); it++)
	{
		//����������ű��
		int deptid = rand() % 3;
		//��Ա�����뵽������
		m.insert(make_pair(deptid, *it));
	}
}

void show(multimap<int, worker>& m)
{
	cout << "�߻����ţ�" << endl;

	multimap<int, worker>::iterator pos = m.find(CEHUA);

	int count = m.count(CEHUA);
	int index = 0;
	for (; pos != m.end() && index < count; pos++, index++)
	{
		cout << "������ " << pos->second.m_name << "���ʣ�" << pos->second.m_salary << endl;
	}

	cout << "------------------------------"<< endl;
	cout << "�������ţ�" << endl;

	pos = m.find(MEISHU);

	count = m.count(MEISHU);
	index = 0;
	for (; pos != m.end() && index < count; pos++, index++)
	{
		cout << "������ " << pos->second.m_name << "���ʣ�" << pos->second.m_salary << endl;
	}

	cout << "------------------------------" << endl;
	cout << "�з����ţ�" << endl;

	pos = m.find(YANFA);

	count = m.count(YANFA);
	index = 0;
	for (; pos != m.end() && index < count; pos++, index++)
	{
		cout << "������ " << pos->second.m_name << "���ʣ�" << pos->second.m_salary << endl;
	}
}

int main()
{
	srand((unsigned int)time(NULL));

	//1������Ա��
	vector<worker>vworker;
	createworker(vworker);
	
	//����
	/*for (vector<worker>::iterator it = vworker.begin(); it != vworker.end(); it++)
	{
		cout << "������" << it->m_name << " ���ʣ�" << it->m_salary << endl;
	}*/

	//2��Ա������
	multimap<int, worker>mworker;
	setgroup(vworker, mworker);

	//3��������ʾԱ��
	show(mworker);
}

