#include <iostream>
using namespace std;

void diagonalSums(int mat[][3], int n)
{
	int principal = 0;
	int secondary = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == j)
			{
				principal += mat[i][j];
			}
			if (j + i == n - 1)
			{
				secondary += mat[i][j];
			}
		}
	}
	cout << "Principal Diagonal: " << principal << endl;
	cout << "Secondary Diagonal: " << secondary << endl;
}

int main ()
{
	int mat[3][3] = {{3, 5, 12}, {1, 1, 1}, {2, 4, 7}};
	const int n = 3;
	diagonalSums (mat, n);
	return 0;
}