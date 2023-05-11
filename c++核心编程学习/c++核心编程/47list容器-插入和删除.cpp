#include<iostream>
using namespace std;
#include<list>

void printList(const list<int>& L)
{
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	list<int>L;

	//Î²²å
	L.push_back(10);
	L.push_back(20);
	L.push_back(30);

	//Í·²å
	L.push_front(100);
	L.push_front(200);
	L.push_front(300);

	printList(L);//300 200 100 10 20 30

	//Í·É¾+Î²É¾
	L.pop_front();
	L.pop_back();
	printList(L);//200 100 10 20

	//insert²åÈë
	L.insert(++L.begin(), 1000);
	printList(L);//200 1000 100 10 20

	//eraseÉ¾³ý
	list<int>::iterator it = L.begin();
	L.erase(it);//1000 100 10 20
	printList(L);

	//ÒÆ³ýremove
	L.push_back(888);
	L.push_back(888);
	L.push_back(888);
	printList(L);//1000 100 10 20 888 888 888
	L.remove(888);
	printList(L);//1000 100 10 20

	//Çå¿Õ
	L.clear();
	printList(L);
}

int main()
{
	test01();
}