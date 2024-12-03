#include <iostream>
#include <iomanip>
const int MAX_SIZE = 10;

void findDiagonals(int matrix[MAX_SIZE][MAX_SIZE], int size) {
	for (int i = 0; i < size; i++)
	{
		std::cout << std::setw(3)<<matrix[i][i];
	}
	std::cout << std::endl;
	for (size_t i = 0; i < size; i++)
	{
		std::cout <<std::setw(3) <<matrix[i][size - 1 - i];
	}
}

int main() {
	int matrix[MAX_SIZE][MAX_SIZE] = { {1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16} };
	findDiagonals(matrix, 4);
}