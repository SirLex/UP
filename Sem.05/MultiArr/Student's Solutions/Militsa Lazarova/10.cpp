#include <iostream>
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
void rotateMatrix(int matrix[MAX_SIZE][MAX_SIZE], int size) {
	int changedmattrix[MAX_SIZE][MAX_SIZE];
	for (size_t i = 0; i < size; i++)
	{
		int currrowindex = size - 1 - i;
		for (size_t j = 0; j < size; j++)
		{
			changedmattrix[j][i] = matrix[currrowindex][j];
		}
	}
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			matrix[i][j] = changedmattrix[i][j];
		}
	}
}
void printMatrix(int matrix[MAX_SIZE][MAX_SIZE], int size) {
	for (size_t i = 0; i < size; i++)
	{
		for (size_t j = 0; j < size; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
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
	rotateMatrix(matrix, size);
	printMatrix(matrix, size);
}