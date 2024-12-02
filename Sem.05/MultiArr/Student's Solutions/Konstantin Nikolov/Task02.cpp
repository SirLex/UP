#include<iostream>
using namespace std;

const int SIZE = 3;

void printDiagonals(int matrix[][SIZE], int N)
{
	for (int i = 0; i < N; i++)
	{
		cout << matrix[i][i] << " ";
	}
	cout << endl;
	for (int i = 0; i < N; i++)
	{
		cout << matrix[i][N - i - 1] << " ";
	}
}

int main()
{
	int matrix[][SIZE] = { {1,2,3}, {4, 5, 6}, {7, 8, 9} };
	printDiagonals(matrix, SIZE);
}