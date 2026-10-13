#include <iostream>
using namespace std;

int main()
{
	int number;
	int ch = 65;
	
	cout << "Enter a number: ";
	cin >> number;
	
	for (int i = 1; i <= number; i++)
	{
		for (int j = 0; i > j; j++)
		{
			cout << (char)ch << " ";
		}
		cout << endl;
		ch++;
	}
	
	return 0;
}