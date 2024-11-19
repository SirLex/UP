#include <iostream>
using namespace std;

const int ROWS = 100;
const int COLUMNS = 100;

void getMatrix(int matrix[ROWS][COLUMNS], int rows, int columns) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			cin >> matrix[i][j];
		}
	} 
}

bool isMatrixMagical(int matrix[ROWS][COLUMNS], int rows, int columns) {
	int sum = 0;
	int sumPrimDiagonal = 0;
	int sumSecDiagonal = 0;

	for (int i = 0; i < rows; i++) {
		sumPrimDiagonal += matrix[i][i];
		sumSecDiagonal += matrix[i][rows - i - 1];
	}
	if (sumPrimDiagonal != sumSecDiagonal) {
		return false;
	}
	sum = sumPrimDiagonal;

	for (int m = 0; m < rows; m++) {
		int sumRow = 0;
		int sumColumn = 0;
		for (int n = 0; n < rows; n++) {
			sumRow += matrix[m][n];
			sumColumn += matrix[n][m];
		}
		if (sum != sumRow || sum != sumColumn) {
			return false;
		}
	}
	return true;
}

int main() {
	int matrix[ROWS][COLUMNS];
	int rows, columns;
	cout << "Enter number of rows and columns: ";
	cin >> rows >> columns;

	getMatrix(matrix, rows, columns);
	
	if (isMatrixMagical(matrix, rows, columns)) {
		cout << "Matrix is magic!";
	}
	else {
		cout << "Matrix is not magic...";
	}



	return 0;
}