#include <iostream>
using namespace std;

long long factorialFunction(int a)
{
	int f = 1;
	if (a == 0)
	{
		return 1;
	}
	for (int i = 1; i <= a; i++)
	{
		f *= i;
	}
	return f;
}

int main()
{
	int number;
	
	cout << "Enter a number: ";
	cin >> number;
	cout << "Factorial: " << factorialFunction(number);
	
	return 0;
}