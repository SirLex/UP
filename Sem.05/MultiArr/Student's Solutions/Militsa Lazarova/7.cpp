#include <iostream>
using namespace std;

int const MAX_SIZE = 10;

bool areNotValid(int rows1, int clmn1, int rows2, int clmn2) {
	return (clmn1 != clmn1 || rows1 != rows2 || rows1 > MAX_SIZE || clmn1 > MAX_SIZE || rows2 > MAX_SIZE || clmn2 > MAX_SIZE);
}

void matricesAddition(int matrix1[MAX_SIZE][MAX_SIZE], int matrix2[MAX_SIZE][MAX_SIZE], int rowsSize, int clmnSize) {
	for (size_t i = 0; i < rowsSize; i++)
	{
		for (size_t j = 0; j < clmnSize; j++)
		{
			matrix1[i][j] += matrix2[i][j];
		}
	}
}
void matricesMultByNumber(int matrix1[MAX_SIZE][MAX_SIZE], int rowsSize, int clmnSize, int number) {
	for (size_t i = 0; i < rowsSize; i++)
	{
		for (size_t j = 0; j < clmnSize; j++)
		{
			matrix1[i][j] *=number;
		}
	}
}

int main() {
	int rowsSize1 = 2;
	int clmnSize1 = 3;
	int rowsSize2 = 2;
	int clmnSize2 = 3;
	int matrix1[MAX_SIZE][MAX_SIZE] = { {1,2,3}, {4,5,6} };
	int matrix2[MAX_SIZE][MAX_SIZE] = { {5,6,7}, {8,9,10} };
	if (areNotValid(rowsSize1, clmnSize1, rowsSize2, clmnSize2))
	{
		cout << "Cannot add matrices with this dimensions!";
	}
	else matricesAddition(matrix1, matrix2, rowsSize1, clmnSize1);


	for (size_t i = 0; i < rowsSize1; i++)
	{
		for (size_t j = 0; j < clmnSize1; j++)
		{
			cout << matrix1[i][j] << " ";
		}
		cout << endl;
	}

	matricesMultByNumber(matrix1, rowsSize1, clmnSize1, 3);
	for (size_t i = 0; i < rowsSize1; i++)
	{
		for (size_t j = 0; j < clmnSize1; j++)
		{
			cout << matrix1[i][j] << " ";
		}
		cout << endl;
	}
}