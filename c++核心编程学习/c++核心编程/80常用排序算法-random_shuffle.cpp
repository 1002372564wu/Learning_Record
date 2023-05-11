#include<iostream>
using namespace std;
#include<functional>
#include<vector>
#include<algorithm>
#include<ctime>

//  random_shuffle

class print
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};

void test()
{
	srand((unsigned int)time(NULL));

	vector<int>v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	v.push_back(6);
	v.push_back(7);

	random_shuffle(v.begin(), v.end());

	for_each(v.begin(), v.end(), print());

}

int main()
{
	test();
}