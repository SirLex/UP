// Task07.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

const int MATRIX_SIZE = 3;

void sumOfMatrixes(int matrix1[][MATRIX_SIZE], int matrix2[][MATRIX_SIZE], int result[][MATRIX_SIZE]) {

	for (int i = 0; i < MATRIX_SIZE; i++)
	{
		for (int j = 0; j < MATRIX_SIZE; j++)
		{
			result[i][j] = matrix1[i][j] + matrix2[i][j];
		}
	}

}

void multiply(int matrix1[][MATRIX_SIZE], int result[][MATRIX_SIZE], int multiplyer) {

	for (int i = 0; i < MATRIX_SIZE; i++)
	{
		for (int j = 0; j < MATRIX_SIZE; j++)
		{
			result[i][j] = matrix1[i][j] * multiplyer;
		}
	}

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
	int multiplyer;
	cin >> multiplyer;
	int result[MATRIX_SIZE][MATRIX_SIZE];

	readMatrix(matrix);

	multiply(matrix, result, multiplyer);

	printMatrix(result);
}
