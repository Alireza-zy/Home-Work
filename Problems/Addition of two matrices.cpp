#include <iostream>
using namespace std;

void add(int A[][3], int B[][3], int C[][3])
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			C[i][j] = A[i][j] + B[i][j];
		}
	}
}

int main()
{
	int A[3][3] = {{2, 2, 2}, {1, 1, 1}, {3, 3, 3}};
	int B[3][3] = {{1, 1, 1}, {2, 2, 2}, {3, 3, 3}};
	int C[3][3];
	
	add(A, B, C);
	
	cout << "Result matrix is: " << endl;
	
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << C[i][j] << " ";
		}
		cout << endl;
	}
	
	return 0;
}