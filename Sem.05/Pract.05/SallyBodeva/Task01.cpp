// Task01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

const int MATRIX_COL = 3;


int findMinElement(int matrix[][MATRIX_COL], int rows) {

	int min = matrix[0][0];

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < 3; j++)
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
	int matrix[3][3]={};
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			int element;
			cin >> element;
			matrix[i][j] = element;
		}
	}

	cout << findMinElement(matrix,3);
	
}
