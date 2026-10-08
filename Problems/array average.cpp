#include <iostream>
using namespace std;

double average(int arr[5], int b)
{
	int sum = 0;
	for(register int i = 0 ; i < 5 ; i++)
	{
		sum += arr[i];
	}
	
	return (double)sum / b;
}

int main()
{
	int arr[5];
	for(register int i = 0 ; i < 5 ; i++)
	{
		cout << "Enter a number: ";
		cin >> arr[i];
	}
	cout << "Average = " << average(arr, 5);
	
	return 0;
}