#include <iostream>
using namespace std;

// 定义英雄结构体
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
		cout << "姓名：" << heroarray[i].name   << "  年龄：" << heroarray[i].age   << "  性别：" << heroarray[i].sex   << endl;
	}
}

int main()
{
	Hero heroarray[5] =
	{
	   {"周杰伦",21,"男"},
	   {"刘德华",16,"男"},
	   {"周润发",18,"男"},
	   {"艾弗森",3,"男"},
	   {"科比",17,"男"},
	};
	int len = sizeof(heroarray) / sizeof(heroarray[0]);
	BubbleSort(heroarray, len);
	printHero(heroarray, len);
}