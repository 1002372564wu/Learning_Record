#include <iostream>
using namespace std;

// ����Ӣ�۽ṹ��
struct Hero
{
	string name;
	int age;
	string sex;
};

void BubbleSort(Hero heroarray[], int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (heroarray[j].age > heroarray[j + 1].age)
			{
				Hero temp = heroarray[j];
				heroarray[j] = heroarray[j + 1];
				heroarray[j + 1] = temp;
			}
		}
	}
}
void printHero(Hero heroarray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "������" << heroarray[i].name   << "  ���䣺" << heroarray[i].age   << "  �Ա�" << heroarray[i].sex   << endl;
	}
}

int main()
{
	Hero heroarray[5] =
	{
	   {"�ܽ���",21,"��"},
	   {"���»�",16,"��"},
	   {"����",18,"��"},
	   {"����ɭ",3,"��"},
	   {"�Ʊ�",17,"��"},
	};
	int len = sizeof(heroarray) / sizeof(heroarray[0]);
	BubbleSort(heroarray, len);
	printHero(heroarray, len);
}