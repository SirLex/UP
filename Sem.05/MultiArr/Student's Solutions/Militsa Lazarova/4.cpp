#include <iostream>
const int MAX_SIZE = 10;

bool isTriangleMatrix(int matrix[MAX_SIZE][MAX_SIZE], int size) {
	for (size_t i = 1; i < size; i++)
	{
		for (size_t j = 0; j < i; j++)
		{
			if (matrix[i][j] != 0) return false;
		}
	}return true;
}

int main() {
	int matrix[MAX_SIZE][MAX_SIZE] = { {5,1,5},{0,5,9},{0,0,7} };
		std::cout<<isTriangleMatrix(matrix, 3);
	}