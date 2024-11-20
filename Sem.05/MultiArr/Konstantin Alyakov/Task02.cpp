#include <iostream>
using namespace std;

const int n = 3;

void enterMatrix(int matrix[n][n]) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> matrix[i][j];
		}
	}
}

void printMainDiagonal(int matrix[n][n]) {
	for (int i = 0; i < n; i++) {
		cout << matrix[i][i] << ' ';
	}
	cout << endl;
}

void printSecondaryDiagonal(int matrix[n][n]) {
	for (int i = 0; i < n; i++) {
		cout << matrix[i][n - 1 - i]<<' ';
	}
	cout << endl;
}

int main()
{
	int matrix [n][n];
	enterMatrix(matrix);

	cout << "Main Diagonal is:" << endl;
	printMainDiagonal(matrix);

	cout << "Secondary Diagonal is:" << endl;
	printSecondaryDiagonal(matrix);
}
