#include<iostream>
using namespace std;
#include<functional>
#include<vector>
#include<algorithm>

//  replace_if 

void print(int val)
{
	cout << val << " ";
}

//ν��
class greater3
{
public:
	bool operator()(int val)
	{
		return val >= 3;
	}
};

void test()
{
	vector<int>v;
	v.push_back(1);
	v.push_back(4);
	v.push_back(2);
	v.push_back(4);
	v.push_back(3);
	v.push_back(5);
	v.push_back(2);
	v.push_back(3);

	cout << "�滻ǰ��" << endl;
	for_each(v.begin(), v.end(), print);

	//�����ڵ���3���滻Ϊ88
	replace_if(v.begin(), v.end(), greater3(),88);
	cout << "�滻��" << endl;
	for_each(v.begin(), v.end(), print);
}

int main()
{
	test();
}