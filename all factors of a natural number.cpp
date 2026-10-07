#include <iostream>
using namespace std;

void factors(int a)
{
	
	for(int i = 1 ; i <= a ; i++)
	{
		if(a % i == 0)
		{
			cout << i << "  ";
		}
	}
}

int main()
{
	int number;
	
	cout << "Enter a number: ";
	cin >> number;
	cout << "Factors: ";
	factors(number);
	
	return 0;
}