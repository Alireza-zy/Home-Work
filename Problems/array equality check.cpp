#include <iostream>
#include <algorithm>
using namespace std;

bool checkArrays(int arr1[], int arr2[], int b, int c)
{
	if(b != c)
		return false;
		
	sort(arr1, arr1 + b);
	sort(arr2, arr2 + c);
	
	for(register int i = 0 ; i < b ; i++)
	{
		if(arr1[i] != arr2[i])
			return false;
	}
	
	return true;
}

int main()
{
	int arr1[] = {1, 2, 3, 4, 5};
	int arr2[] = {5, 4, 3, 2, 1};
	
	if(checkArrays(arr1, arr2, 5, 5))
		cout << "Equal";
	else
		cout << "Not equal";
	
	return 0;
}