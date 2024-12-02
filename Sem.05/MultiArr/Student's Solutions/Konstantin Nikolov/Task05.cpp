#include<iostream>
using namespace std;

const int SIZE = 3;

void transpose(int matrix[][SIZE], int N)
{
	for (int i = 0; i < N; i++)
	{
		for (int j = i; j < N; j++)
		{
			int temp = matrix[i][j];
			matrix[i][j] = matrix[j][i];
			matrix[j][i] = temp;
		}
	}
}

int main()
{
	int matrix[][SIZE] = { {1, 2, 3}, {0, 5, 6}, {0, 0, 9} };
	transpose(matrix, SIZE);
	cout << matrix[0][1];
}