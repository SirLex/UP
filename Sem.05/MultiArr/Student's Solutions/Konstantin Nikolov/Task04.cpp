#include<iostream>
using namespace std;

const int SIZE = 3;

bool isTriangle(int matrix[][SIZE], int N)
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (i > j && matrix[i][j] != 0)
			{
				return false;
			}
		}
	}
	return true;
}

int main()
{
	int matrix[][SIZE] = { {1,2,3}, {0, 5, 6}, {0, 0, 9} };
	cout << isTriangle(matrix, SIZE);
}