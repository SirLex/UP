// Task06.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

const int MATRIX_SIZE = 4;

bool isTheMatrixMagical(int matrix[MATRIX_SIZE][MATRIX_SIZE]) {

	int sumOfRows = 0;

	for (int i = 0; i < MATRIX_SIZE; i++)
	{
		sumOfRows += matrix[0][i];
	}

	for (int i = 1; i < MATRIX_SIZE; i++)
	{
		int currentRowSum = 0;
		for (int j = 0; j < MATRIX_SIZE; j++)
		{
			currentRowSum += matrix[i][j];
		}
		if (currentRowSum != sumOfRows)
		{
			return false;
		}
	}

	for (int i = 0; i < MATRIX_SIZE; i++)
	{
		int currentColSum = 0;
		for (int j = 0; j < MATRIX_SIZE; j++)
		{
			currentColSum += matrix[j][i];
		}
		if (currentColSum != sumOfRows)
		{
			return false;
		}
	}

	int mainDiagonalSum = 0;
	int secondDiagonalSum = 0;

	for (int i = 0; i < MATRIX_SIZE; i++)
	{
		for (int j = 0; j < MATRIX_SIZE; j++)
		{
			if (i == j)
			{
				mainDiagonalSum += matrix[i][j];
			}
			if (MATRIX_SIZE - j - 1 == i)
			{
				secondDiagonalSum += matrix[i][j];;
			}
		}
	}
	if (mainDiagonalSum != sumOfRows || secondDiagonalSum != sumOfRows)
	{
		return false;
	}
	
	return true;
}


void printMatrix(int matrix[MATRIX_SIZE][MATRIX_SIZE]) {

	for (int i = 0; i < MATRIX_SIZE; i++)
	{
		for (int j = 0; j < MATRIX_SIZE; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}

}
void readMatrix(int matrix[MATRIX_SIZE][MATRIX_SIZE])
{
	for (int i = 0; i < MATRIX_SIZE; i++)
	{
		for (int j = 0; j < MATRIX_SIZE; j++)
		{
			cin >> matrix[i][j];
		}
	}
}

int main()
{
	int matrix[MATRIX_SIZE][MATRIX_SIZE];

	readMatrix(matrix);
		
	cout << isTheMatrixMagical(matrix);
	
}
