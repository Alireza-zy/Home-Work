#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a, b;
	int temp;
	cin >> a >> b;
	temp = a;
	a = b;
	b = temp;
	cout << "a:" << a <<" " << "b:" << b << endl;
	return 0;
}