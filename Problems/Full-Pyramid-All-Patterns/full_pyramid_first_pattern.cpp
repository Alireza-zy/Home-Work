#include <iostream>
using namespace std;

int main()
{
	int number;
	int f = 1;
	cout << "Enter a number: ";
	cin >> number;
	
	for(int i = 0; i <= number; i++)
	{
		for(int j = 0; j < i; j++)
		{
			cout << f << " ";
			f++;
		}
		cout << endl;
	}
	
	return 0;
}