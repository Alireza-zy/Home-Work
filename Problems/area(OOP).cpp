#include <iostream>
using namespace std;

class Area
{
	public:
		int f(int a, int b);
};

int Area :: f(int a, int b)
{
	return a*b;
}

int main()
{
	Area obj;
	cout << obj.f(2, 4);
	
	return 0;
}