#include <iostream>
using namespace std;

int const MAX_SIZE = 10;

void rotateMatrix(int matrix[MAX_SIZE][MAX_SIZE], int size) {
	int changedmattrix[MAX_SIZE][MAX_SIZE];
	for (size_t i = 0; i < size; i++)
	{

		for (size_t j = 0; j < size; j++)
		{
			changedmattrix[j][i] = matrix[i][j];
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

int main() {
	int matrix[MAX_SIZE][MAX_SIZE] = { {1,2,3},{4,5,6},{7,8,9} };


	rotateMatrix(matrix, 3);
	
	for (size_t i = 0; i < 3; i++)
			{
				for (size_t j = 0; j < 3; j++)
				{
					cout << matrix[i][j] << " ";
				}
				cout << endl;
			}
		
}