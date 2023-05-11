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
		string name = "ѡ��";
		name += nameseed[i];

		int score = 0;

		Person p(name, score);
		v.push_back(p);
	}
}

//���
void setscore(vector<Person>& v)
{
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		//����ί�ķ������뵽deque������
		deque<int>d;
		for (int i = 0; i < 10; i++)
		{
			int score = rand() % 41 + 60;    //60-100
			d.push_back(score);
		}

		//����
		sort(d.begin(), d.end());
		//ȥ����߷ֺ���ͷ�
		d.pop_back();
		d.pop_front();

		//ȡƽ����
		int sum = 0;
		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
		{
			sum += *dit;
		}
		int avg = sum / d.size();
	    //��ƽ���ָ�ֵ��ѡ������
		it->m_score = avg;
	}
}

void showscore(vector<Person>& v)
{
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "������" << it->m_name << " ƽ���֣�" << it->m_score << endl;
	}
}

int main()
{
	//���������
	srand((unsigned int)time(NULL));
	
	//1������5��ѡ��
	vector<Person>v;//���ѡ������
	createPerson(v);

	//����
	/*for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "������" << (*it).m_name << " ������" << (*it).m_score << endl;
	}*/

	//2����5��ѡ�ִ��
	setscore(v);

	//3����ʾ���÷�
	showscore(v);
}