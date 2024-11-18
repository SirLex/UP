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

void zigZacMatrix(int matrix[ROWS][COLUMNS], int rows, int columns) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			if (i % 2 == 0) {
				cout << matrix[i][j] << " ";
			}
			else {
				cout << matrix[i][rows - j - 1] << " ";
			}
		}
		cout << endl;
	}
}

int main() {
	int matrix[ROWS][COLUMNS];
	int rows, columns;
	cout << "Enter number of rows and columns: ";
	cin >> rows >> columns;

	getMatrix(matrix, rows, columns);
	zigZacMatrix(matrix, rows, columns);



	return 0;
}