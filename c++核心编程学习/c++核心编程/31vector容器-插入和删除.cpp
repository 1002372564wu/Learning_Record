#include<iostream>
using namespace std;
#include<vector>

//β��    βɾ 
//���ֲ������  ����ɾ������  ��ղ���

void printVector(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test()
{
	vector<int> v1;
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);
	v1.push_back(4);
	v1.push_back(5);

	//����
	printVector(v1);

	//βɾ
	v1.pop_back();
	printVector(v1);

	//����
	v1.insert(v1.begin(), 100); //��һ�������ǵ�����
	printVector(v1);

	v1.insert(v1.begin()+1 , 5, 1000);
	printVector(v1);

	//ɾ�� ����Ҳ�ǵ�����
	v1.erase(v1.begin());
	printVector(v1);

	//������շ�ʽ
	// v1.erase(v1.begin(), v1.end()); 
	v1.clear();
	printVector(v1); 
}

int main()
{
	test();
}