#include <iostream>
using namespace std;

int main()
{
	int counter = 1;
	int number;
	cout << "Enter a number: ";
	cin >> number;
	
	for (int i = 0; i <= number; i++)
	{
		for (int j = 0; j < i ;j++)
		{
			cout << counter << " ";
			counter++;
		}
		cout << endl;
	}
	return 0;
}