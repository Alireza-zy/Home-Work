#include <iostream>
using namespace std;

int main()
{
	char ch;
	
	cout << "Enter a small letter character:";
	cin >> ch;
	
	switch(ch)
	{
		case 'a' :
		case 'e' :
		case 'i' :
		case 'o' :
		case 'u' : cout << "It is vowel."; break;
		default : cout << "It is consonant.";
	}
	return 0;
}