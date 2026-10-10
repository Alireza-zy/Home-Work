#include <iostream>
using namespace std;

int main()
{
	int number;
	cout << "Enter a number: ";
	cin >> number;
	
	for (register int i = 1; i <= number; i++)
	{
		for (register int j = 0; i > j; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
	
	return 0;
}