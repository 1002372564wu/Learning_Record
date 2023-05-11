#include<iostream>
using namespace std;
#include<functional>
#include<vector>
#include<algorithm>

//´óÓÚ greater

class compare
{
public:
	bool operator()(int v1, int v2)
	{
		return v1 > v2;
	}
};

void test()
{
	vector<int>v;
	v.push_back(1);
	v.push_back(4);
	v.push_back(2);
	v.push_back(3);
	v.push_back(5);

	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

	//½µÐò
	//sort(v.begin(), v.end(), compare());
	sort(v.begin(), v.end(), greater<int>());
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

int main()
{
	test();
}