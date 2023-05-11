#include<iostream>
using namespace std;
#include<string>
#include"MyArray.hpp"

//测试自定义数据类型
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
		cout << "姓名:" << arr[i].m_name << "年龄：" << arr[i].m_age << endl;
	}
}

void test()
{
	MyArray<int> arr1(5);

	for (int i = 0; i < 5; i++)
	{
		//利用尾插法向数组插入数据
		arr1.push_back(i);
	}
	cout << "arr1的打印输出为：" << endl;

	printArray(arr1);

	cout << "arr1的容量为：" << arr1.getcapacity() << endl;
	cout << "arr1的大小为：" << arr1.getsize() << endl;

	MyArray<int> arr2(arr1);

	cout << "arr2的打印输出为：" << endl;
	printArray(arr2);

	//尾删
	arr2.pop_back();
	cout << "arr2尾删后：" << endl;
	cout << "arr2的容量为：" << arr2.getcapacity() << endl;
	cout << "arr2的大小为：" << arr2.getsize() << endl;


	/*MyArray<int> arr2(arr1);

	MyArray<int> arr3(100);
	arr3 = arr1;*/
}



void test02()
{
	MyArray<Person> arr(10);
	Person p1("科比", 24);
	Person p2("艾弗森", 3);
	Person p3("麦迪", 1);
	Person p4("卡特", 15);
	Person p5("乔丹", 23);

	//将数据插入到数组中
	arr.push_back(p1);
	arr.push_back(p2);
	arr.push_back(p3);
	arr.push_back(p4);
	arr.push_back(p5);

	//打印数组
	printArray2(arr);

	//输出容量
	cout << "arr容量为：" << arr.getcapacity() << endl;
	//输出大小
	cout << "arr大小为：" << arr.getsize() << endl;
}

int main()
{
	//test();
	test02();
}