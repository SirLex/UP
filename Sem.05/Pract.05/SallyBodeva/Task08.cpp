// Task08.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

const int FIRST_MATRIX_ROWS_COUNT = 5;
const int FIRST_MATRIX_COL_COUNT = 2;

const int SECOND_MATRIX_ROWS_COUNT = 2;
const int SECOND_MATRIX_COL_COUNT = 3;

const int RESULT_MATRIX_ROWS_COUNT = 5;
const int RESULT_MATRIX_COL_COUNT = 3;


void multiplyMatrix(int matrix[][FIRST_MATRIX_COL_COUNT], int matrix2[][SECOND_MATRIX_COL_COUNT], int result[FIRST_MATRIX_ROWS_COUNT][SECOND_MATRIX_COL_COUNT]) {

	for (int i = 0; i < FIRST_MATRIX_ROWS_COUNT; i++)
	{

		for (int j = 0; j < SECOND_MATRIX_COL_COUNT; j++)
		{
			for (int k = 0; k < FIRST_MATRIX_COL_COUNT; k++)
			{
				result[i][j] += matrix[i][k] * matrix2[k][j];
			}
		}
	}

}



void readMatrix(int matrix[FIRST_MATRIX_ROWS_COUNT][FIRST_MATRIX_COL_COUNT])
{
	for (int i = 0; i < FIRST_MATRIX_COL_COUNT; i++)
	{
		for (int j = 0; j < FIRST_MATRIX_ROWS_COUNT; j++)
		{
			cin >> matrix[i][j];
		}
	}
}

void printMatrix(int matrix[][RESULT_MATRIX_COL_COUNT]) {

	for (int i = 0; i < RESULT_MATRIX_ROWS_COUNT; i++)
	{
		for (int j = 0; j < RESULT_MATRIX_COL_COUNT; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}

}

int main()
{
	int matrix1[FIRST_MATRIX_ROWS_COUNT][FIRST_MATRIX_COL_COUNT] = { {1,2},{8,9},{10,0},{1,0}, { 2,2 } };
	int matrix2[SECOND_MATRIX_ROWS_COUNT][SECOND_MATRIX_COL_COUNT] = { {1,2,3},{4,5,2} };

	int result[RESULT_MATRIX_ROWS_COUNT][RESULT_MATRIX_COL_COUNT] = {};

	multiplyMatrix(matrix1, matrix2, result);

	printMatrix(result);
}


