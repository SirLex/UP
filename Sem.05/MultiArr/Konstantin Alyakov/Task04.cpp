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

bool checkIfTriangular(int matrix[n][n]) {
	for (int i = 1; i < n; i++) {
		for (int j = 0; j < i; j++) {
			if (matrix[i][j] != 0)
				return false;
		}
	}
	return true;
}

int main()
{
	int matrix[n][n];
	enterMatrix(matrix);
	cout << checkIfTriangular(matrix); 


}
