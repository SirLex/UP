#include <iostream>
#include "11.h"
using namespace std;
int const MAX_SIZE = 10;

void enterMatrixData(int matrix[MAX_SIZE][MAX_SIZE], int size) {
	for (size_t i = 0; i < size; i++)
	{
		for (size_t j = 0; j < size; j++)
		{
			cin >> matrix[i][j];
		}
	}
}
bool isMagicSquare(int matrix[MAX_SIZE][MAX_SIZE], int size) {
	int rowSum = 0;
	int columnSum = 0;
	for (int i = 0; i < size; i++)
	{
		rowSum += matrix[0][i];
		columnSum += matrix[i][0];
	}
	if (rowSum != columnSum) return false;
	int currRowSum = 0;
	int currColumnSum = 0;
	for (size_t i = 1; i < size; i++)
	{
		for (size_t j = 0; j < size; j++)
		{
			currRowSum += matrix[i][j];
			currColumnSum += matrix[j][i];
		}
		if (currRowSum != rowSum || currColumnSum != columnSum)
		{
			return false;
		}
		currRowSum = 0;
		currColumnSum = 0;
	}
	int mainDiag = 0;
	int secDiag = 0;
	for (int i = 0; i < size; i++)
	{
		mainDiag += matrix[i][i];
		secDiag += matrix[size - 1 - i][i];
	}
	return (rowSum == mainDiag && mainDiag == secDiag);
}

int main() {
	int matrix[MAX_SIZE][MAX_SIZE];
	int size;
	cin >> size;
	while (size <= 0 || size > 10)
	{
		cout << "Invalid size!" << endl;
		cin >> size;
	}
	enterMatrixData(matrix, size);
	cout << isMagicSquare(matrix, size);

}