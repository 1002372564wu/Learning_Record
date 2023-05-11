#include<iostream>
using namespace std;
#include<map>



void printmap(map<int, int>& m)
{
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key = " << (*it).first << " value = " << it->second << endl;
	}
	cout << endl;
}

void test()
{
	map<int, int>m;
	//插入 第一种方式
	m.insert(pair<int, int>(1, 10));
	//插入 第二种方式
	m.insert(make_pair(2, 20));
	//插入 第三种方式
	//m.insert(map<int, int>::value_type(3.30));
	//插入 第四种方式
	m[4] = 40;

	//[]不建议插入，用途：可以利用key访问到value
	cout << m[4] << endl;

	printmap(m);

	//删除
	m.erase(m.begin());
	printmap(m);

	m.erase(4);//按照key删除
	printmap(m);

	//清空
	//m.erase(m.begin(), m.end());
	//m.clear();
}

int main()
{
	test();
}