#include<iostream>
using namespace std;

const int SIZE = 3;

bool isMagicSquare(int matrix[][SIZE], int N)
{
	int sum = 0;
	for (int i = 0; i < N; i++)
	{
		sum += matrix[0][i];
	}
	for (int i = 1; i < N; i++)
	{
		int tempSum = 0;
		for (int j = 0; j < N; j++)
		{
			tempSum += matrix[i][j];
		}
		if (tempSum != sum)
		{
			return false;
		}
	}
	for (int i = 0; i < N; i++)
	{
		int tempSum = 0;
		for (int j = 0; j < N; j++)
		{
			tempSum += matrix[j][i];
		}
		if (tempSum != sum)
		{
			return false;
		}
	}
	int tempSum = 0;
	for (int i = 0; i < N; i++)
	{
		tempSum += matrix[i][i];
	}
	if (tempSum != sum)
	{
		return false;
	}
	tempSum = 0;
	for (int i = 0; i < N; i++)
	{
		tempSum += matrix[i][N - i - 1];
	}
	if (tempSum != sum)
	{
		return false;
	}
	return true;
}

int main()
{
	int matrix[][SIZE] = { {1, 2, 1}, {1, 1, 1}, {1, 1, 1} };
	cout << isMagicSquare(matrix, 3);
}