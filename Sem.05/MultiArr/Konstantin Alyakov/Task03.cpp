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

void printZigZag(int matrix[n][n]) {

	for (int i = 0; i < n; i++) {
		if (i % 2 == 0) {
			for (int j = 0; j < n; j++) {
				cout << matrix[i][j] << ' ';
			}
		}
		else {
			for (int j = n - 1; j >= 0; j--) {
				cout << matrix[i][j] << ' ';
			}
		}
		cout << endl;
	}
}

int main()
{
	int matrix[n][n];
	enterMatrix(matrix);
	printZigZag(matrix);
}
