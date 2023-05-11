#include<iostream>
using namespace std;
#include<deque>
#include<algorithm>
#include<vector>

class Person
{
public:
	Person(string name, int score)
	{
		this->m_name = name;
		this->m_score = score;
	}
	string m_name;
	int m_score;
};

void createPerson(vector<Person>& v)
{
	string nameseed = "ABCDE";
	for (int i = 0; i < 5; i++)
	{
		string name = "选手";
		name += nameseed[i];

		int score = 0;

		Person p(name, score);
		v.push_back(p);
	}
}

//打分
void setscore(vector<Person>& v)
{
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		//将评委的分数放入到deque容器中
		deque<int>d;
		for (int i = 0; i < 10; i++)
		{
			int score = rand() % 41 + 60;    //60-100
			d.push_back(score);
		}

		//排序
		sort(d.begin(), d.end());
		//去除最高分和最低分
		d.pop_back();
		d.pop_front();

		//取平均分
		int sum = 0;
		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
		{
			sum += *dit;
		}
		int avg = sum / d.size();
	    //将平均分赋值给选手身上
		it->m_score = avg;
	}
}

void showscore(vector<Person>& v)
{
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "姓名：" << it->m_name << " 平均分：" << it->m_score << endl;
	}
}

int main()
{
	//随机数种子
	srand((unsigned int)time(NULL));
	
	//1、创建5名选手
	vector<Person>v;//存放选手容器
	createPerson(v);

	//测试
	/*for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "姓名：" << (*it).m_name << " 分数：" << (*it).m_score << endl;
	}*/

	//2、给5名选手打分
	setscore(v);

	//3、显示最后得分
	showscore(v);
}