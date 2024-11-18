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

int isTriangular(int matrix[ROWS][COLUMNS], int rows, int columns) {
	bool notZero = false;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			if (i > j) {
				if (matrix[i][j] != 0) {
					notZero = false;
				}
				else {
					notZero = true;
				}
			}
		}
	}
	return notZero;
}

int main() {
	int matrix[ROWS][COLUMNS];
	int rows, columns;
	cout << "Enter number of rows and columns: ";
	cin >> rows >> columns;
	getMatrix(matrix, rows, columns);
	
	if (isTriangular(matrix, rows, columns)) {
		cout << "yes.";
	}
	else {
		cout << "no.";
	}

	return 0;
}