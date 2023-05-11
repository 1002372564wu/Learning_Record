#include<iostream>
using namespace std;
#include<string>
#include"MyArray.hpp"

//�����Զ�����������
class Person
{
public:
	Person() {};
	Person(string name, int age)
	{
		this->m_name = name;
		this->m_age = age;
	}

	string m_name;
	int m_age;
};

void printArray(MyArray<int> arr)
{
	for (int i = 0; i < arr.getsize(); i++)
	{
		cout << arr[i] << endl;
	}
}

void printArray2(MyArray<Person> arr)
{
	for (int i = 0; i < arr.getsize(); i++)
	{
		cout << "����:" << arr[i].m_name << "���䣺" << arr[i].m_age << endl;
	}
}

void test()
{
	MyArray<int> arr1(5);

	for (int i = 0; i < 5; i++)
	{
		//����β�巨�������������
		arr1.push_back(i);
	}
	cout << "arr1�Ĵ�ӡ���Ϊ��" << endl;

	printArray(arr1);

	cout << "arr1������Ϊ��" << arr1.getcapacity() << endl;
	cout << "arr1�Ĵ�СΪ��" << arr1.getsize() << endl;

	MyArray<int> arr2(arr1);

	cout << "arr2�Ĵ�ӡ���Ϊ��" << endl;
	printArray(arr2);

	//βɾ
	arr2.pop_back();
	cout << "arr2βɾ��" << endl;
	cout << "arr2������Ϊ��" << arr2.getcapacity() << endl;
	cout << "arr2�Ĵ�СΪ��" << arr2.getsize() << endl;


	/*MyArray<int> arr2(arr1);

	MyArray<int> arr3(100);
	arr3 = arr1;*/
}



void test02()
{
	MyArray<Person> arr(10);
	Person p1("�Ʊ�", 24);
	Person p2("����ɭ", 3);
	Person p3("���", 1);
	Person p4("����", 15);
	Person p5("�ǵ�", 23);

	//�����ݲ��뵽������
	arr.push_back(p1);
	arr.push_back(p2);
	arr.push_back(p3);
	arr.push_back(p4);
	arr.push_back(p5);

	//��ӡ����
	printArray2(arr);

	//�������
	cout << "arr����Ϊ��" << arr.getcapacity() << endl;
	//�����С
	cout << "arr��СΪ��" << arr.getsize() << endl;
}

int main()
{
	//test();
	test02();
}