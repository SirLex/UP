#include <iostream>
using namespace std;
const int ROWS = 100;
const int COLUMNS = 100;

void diagonals(int matrix[ROWS][COLUMNS]) {
	int row, column;
	cin >> row >> column;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < column; j++) {
			cin >> matrix[i][j];
		}
	}

	for (int m = 0; m < row; m++) {
		cout << matrix[m][m] << ' ';
	}
	cout << endl;

	for (int n = 0; n < row; n++) {
		cout << matrix[n][row - n - 1] << ' ';
	}
	cout << endl;
}

int main() {
	int matrix[ROWS][COLUMNS];
	diagonals(matrix);
	return 0;
}