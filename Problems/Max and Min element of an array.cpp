#include <iostream>
using namespace std;

int getMax(int arr[], int length)
{
	int max;
	max = arr[0];
	for (int i = 0; i < length; i++)
	{
		if(arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;
}

int getMin(int arr[], int length)
{
	int min;
	min = arr[0];
	for (int j = 0; j < length; j++)
	{
		if (arr[j] < min)
		{
			min = arr[j];
		}
	}
	return min;
}

int main()
{
	int arr[] = {12, 10, 23, 2};
	int length = sizeof(arr) / sizeof(arr[0]);
	
	cout << "Max element: " << getMax(arr, length) << endl;
	cout << "Min element: " << getMin(arr, length);
		
	return 0;
}