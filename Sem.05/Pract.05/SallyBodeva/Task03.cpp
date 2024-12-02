// Task03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

const int MATRIX_SIZE = 3;

void printMatrixInZigZigWay(int matrix[][MATRIX_SIZE]) {

	int currenRow = 0;

	for (int i = 0; i < MATRIX_SIZE; i++)
	{
		if (currenRow % 2 == 0)
		{
			for (int j = 0; j < MATRIX_SIZE; j++)
			{
				cout << matrix[i][j]  << " ";
			}
		}
		else
		{
			for (int j = MATRIX_SIZE-1; j >= 0; j--)
			{
				cout << matrix[i][j] << " ";
			}
		}
		currenRow++;
		cout << endl;
	}

}


int main()
{
	int matrix[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };

	printMatrixInZigZigWay(matrix);
}
