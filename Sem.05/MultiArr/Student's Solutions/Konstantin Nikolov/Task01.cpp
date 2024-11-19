#include<iostream>
using namespace std;

const int CAPACITY = 1000;
int min(int matrix[][3], int N, int M)
{
	int min = matrix[0][0];
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if (matrix[i][j] < min)
			{
				min = matrix[i][j];
			}
		}
	}

	return min;
}

int main()
{
	int matrix[3][3] = { {1,2,3}, {2, 3, 10}, {4, 5, -100} };
	cout << min(matrix, 3, 3);
}