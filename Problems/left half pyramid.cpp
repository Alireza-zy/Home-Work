#include <iostream>
using namespace std;

int main()
{
	int number;
	
	cout << "Enter a number: ";
	cin >> number;
	
	for(register int i = number; i > 0; i--)
	{
		for(register int j = 0; j <= number; j++)
		{
			if(i <= j)
			{
				cout << "*";
			}
			else
				cout << " ";
		}
		cout << endl;
	}
	
	return 0;
}