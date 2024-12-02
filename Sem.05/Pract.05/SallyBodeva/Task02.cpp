// Task02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

const int MATRIX_SIZE = 3;

void printMainDiagonal(int matrix[MATRIX_SIZE][MATRIX_SIZE]) {

	for (int i = 0; i < MATRIX_SIZE; i++)
	{
		for (int j = 0; j < MATRIX_SIZE; j++)
		{
			if (i==j)
			{
				cout << matrix[i][j] << " ";
			}
		}
	}

}

void printSecondDiagonal(int matrix[MATRIX_SIZE][MATRIX_SIZE]) {

	for (int i = 0; i < MATRIX_SIZE; i++)
	{
		for (int j = 0; j < MATRIX_SIZE; j++)
		{
			if ()
			{
				cout << matrix[i][j] << " ";
			}
		}
	}

}

int main()
{
	int matrix[3][3] = { {1, 2, 3}, {4, 5,6}, {7, 8, 9} };

	//printDiagonal(matrix);

}
