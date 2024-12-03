#include <iostream>
#include <iomanip>
const int MAX_SIZE = 10;

int minElementOfMatrix(int matrix[MAX_SIZE][MAX_SIZE], int size) {
	int minEl = matrix[0][0];
	for (size_t i = 0; i < size; i++)
	{
		for (size_t j = 0; j < size; j++)
		{
			if (minEl>matrix[i][j])
			{
				minEl = matrix[i][j];
			}
		}
	}
	return minEl;
}

int main() {
	int matrix[MAX_SIZE][MAX_SIZE] = { {98,2,3,4},{5,0,7,8},{9,10,11,12},{13,14,15,16} };
	std::cout<< minElementOfMatrix(matrix, 4);
}