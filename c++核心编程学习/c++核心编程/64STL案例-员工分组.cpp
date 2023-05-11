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
		worker.m_name = "员工";
		worker.m_name += nameseed[i];

		worker.m_salary = rand() % 10000 + 10000;//10000-19999

		//将员工放入容器中
		v.push_back(worker);
	}

}

void setgroup(vector<worker>&v,multimap<int,worker>&m)
{
	for (vector<worker>::iterator it = v.begin(); it != v.end(); it++)
	{
		//产生随机部门编号
		int deptid = rand() % 3;
		//将员工插入到分组中
		m.insert(make_pair(deptid, *it));
	}
}

void show(multimap<int, worker>& m)
{
	cout << "策划部门：" << endl;

	multimap<int, worker>::iterator pos = m.find(CEHUA);

	int count = m.count(CEHUA);
	int index = 0;
	for (; pos != m.end() && index < count; pos++, index++)
	{
		cout << "姓名： " << pos->second.m_name << "工资：" << pos->second.m_salary << endl;
	}

	cout << "------------------------------"<< endl;
	cout << "美术部门：" << endl;

	pos = m.find(MEISHU);

	count = m.count(MEISHU);
	index = 0;
	for (; pos != m.end() && index < count; pos++, index++)
	{
		cout << "姓名： " << pos->second.m_name << "工资：" << pos->second.m_salary << endl;
	}

	cout << "------------------------------" << endl;
	cout << "研发部门：" << endl;

	pos = m.find(YANFA);

	count = m.count(YANFA);
	index = 0;
	for (; pos != m.end() && index < count; pos++, index++)
	{
		cout << "姓名： " << pos->second.m_name << "工资：" << pos->second.m_salary << endl;
	}
}

int main()
{
	srand((unsigned int)time(NULL));

	//1、创建员工
	vector<worker>vworker;
	createworker(vworker);
	
	//测试
	/*for (vector<worker>::iterator it = vworker.begin(); it != vworker.end(); it++)
	{
		cout << "姓名：" << it->m_name << " 工资：" << it->m_salary << endl;
	}*/

	//2、员工分组
	multimap<int, worker>mworker;
	setgroup(vworker, mworker);

	//3、分组显示员工
	show(mworker);
}

