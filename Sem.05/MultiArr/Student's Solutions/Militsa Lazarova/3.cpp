#include <iostream>
#include <iomanip>
const int MAX_SIZE = 10;

void zigZagPrintMatrix(int matrix[MAX_SIZE][MAX_SIZE], int size) {
	int currRow = 0;
	while (currRow < size)
	{
		if (currRow % 2 == 0) {
			for (size_t j = 0; j < size; j++)
			{
				std::cout << std::setw(3) << matrix[currRow][j];
			}
		}
		else {
			for (int j = size - 1; j >= 0; j--)
			{
				std::cout << std::setw(3) << matrix[currRow][j];
			}
		}
		currRow++;
		std::cout << std::endl;
	}
}

int main() {
	int matrix[MAX_SIZE][MAX_SIZE] = { {1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16} };
	zigZagPrintMatrix(matrix, 4);
}