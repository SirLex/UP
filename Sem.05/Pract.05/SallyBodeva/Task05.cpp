// Task05.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


const int MATRIX_SIZE = 3;

void tranponMatrix(int matrix[][MATRIX_SIZE], int matrixResult[][MATRIX_SIZE]) {

	for (int i = 0; i < MATRIX_SIZE; i++)
	{
		for ( int j = 0; j < MATRIX_SIZE; j++)
		{
			matrixResult[j][i] = matrix[i][j];
		}
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

int main()
{
	int matrix[MATRIX_SIZE][MATRIX_SIZE];
	int matrixResult[MATRIX_SIZE][MATRIX_SIZE];

	readMatrix(matrix);

	tranponMatrix(matrix,matrixResult);

	printMatrix(matrixResult);
}