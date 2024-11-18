#include <iostream>
using namespace std;

const int capR = 100;
const int capC = 100;

int smallestNumInMatrix(int matrix[][capC], int row, int column) {
	int smallest = matrix[0][0];

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < column; j++) {
			if (smallest > matrix[i][j]) {
				smallest = matrix[i][j];
			}
		}
	}
	return smallest;
}

int main() {
	int matrix[capR][capC];
	int row, column;
	cin >> row >> column;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < column; j++) {
			cin >> matrix[i][j];
		}
	}
	cout << smallestNumInMatrix(matrix, row, column);
}
