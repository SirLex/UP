#include<iostream>
using namespace std;

const int SIZE = 3;

void printZigZag(int matrix[][SIZE], int N, int M)
{
	for (int i = 0; i < N; i++)
	{
		int direction = i % 2;
		for (int j = 0; j < M; j++)
		{
			if (i % 2)
			{
				cout << matrix[i][M - j - 1] << " ";
			}
			else
			{
				cout << matrix[i][j] << " ";
			}
		}
		cout << endl;
	}
}

int main()
{
	int matrix[][SIZE] = { {1,2,3}, {4, 5, 6}, {7, 8, 9} };
	printZigZag(matrix, SIZE, SIZE);
}