#include <iostream>
using namespace std;

// Ã°ÅÝÅÅÐòº¯Êý
void bubbleSort(int *arr, int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int t = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = t;
			}
		}
	}
}
void main1()
{
	int arr[10] = { 4,3,6,9,1,2,10,8,7,5 };
	int len = sizeof(arr) / sizeof(arr[0]);
	bubbleSort(arr, len);
	for (int k = 0; k < len; k++)
	{
		cout << arr[k] << endl;

	}

}