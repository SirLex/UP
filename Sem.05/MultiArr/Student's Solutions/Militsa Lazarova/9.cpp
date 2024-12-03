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

void printSpirally(int matrix[MAX_SIZE][MAX_SIZE],int size) {
	int minRowIndex = 0;
	int minColumnIndex = 0;
	int maxRowIndex = size-1;
	int maxColumnIndex = size-1;
	int elementsLeft=size*size;
	while (elementsLeft)
	{
		for (int j = minColumnIndex; j <= maxColumnIndex; j++)
		{
			cout << matrix[minRowIndex][j] << " ";
			elementsLeft--;
		}
		minRowIndex++;
		for (int j = minRowIndex; j <= maxRowIndex; j++)
		{
			cout << matrix[j][maxColumnIndex] << " ";
			elementsLeft--;
		}
		maxColumnIndex--;
		for (int j = maxColumnIndex; j >= minColumnIndex; j--)
		{
			cout << matrix[maxRowIndex][j] << " ";
			elementsLeft--;
		}
		maxRowIndex--;
		for (int j = maxRowIndex; j >= minRowIndex; j--)
		{
			cout << matrix[j][minColumnIndex] << " ";
			elementsLeft--;
		}
		minColumnIndex++;
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
	
	printSpirally(matrix,size);
}