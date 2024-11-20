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
void swap(int& x, int& y) {
	int temp = x;
	x = y;
	y = temp;
}

void transpondMatrix(int matrix[n][n]) {
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			swap(matrix[i][j], matrix[j][i]);
		}
	}
}

void printMatrix(int matrix[n][n]) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << matrix[i][j] << ' ';
		}
		cout << endl;
	}
}

int main()
{
	int matrix[n][n];
	enterMatrix(matrix);

	transpondMatrix(matrix);
	printMatrix(matrix);
}
