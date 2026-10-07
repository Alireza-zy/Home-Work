#include <iostream>
#include <string>
using namespace std;

int stringLength(string a)
{
	int counter = 0;
	while(a[counter])
	{
		counter++;
	}
	
	return counter;
}

int main()
{
	string a;
	
	cout << "Type a text." << endl;
	cin >> a;
	cout << endl;
	cout << "String length: ";
	cout << stringLength(a);
	
	return 0;
}