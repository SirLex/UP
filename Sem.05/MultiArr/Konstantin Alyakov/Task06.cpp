#include <iostream>
using namespace std;

const int n = 4;

void enterMatrix(int matrix[n][n]) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> matrix[i][j];
		}
	}
}

bool checkIfMagic(int matrix[n][n]) {
	int sum;
	int sumPrimeDiagonal = 0;
	int sumSecondaryDiagonal = 0;

	for (int i = 0; i < n; i++) {
		sumPrimeDiagonal += matrix[i][i];
		sumSecondaryDiagonal += matrix[i][n - 1 - i];
	}

	if (sumPrimeDiagonal != sumSecondaryDiagonal)
		return false;

	sum = sumPrimeDiagonal;

	for (int i = 0; i < n; i++) {
		int sumRows = 0;
		int sumCols = 0;
		for (int j = 0; j < n; j++) {
			sumRows += matrix[i][j];
			sumCols += matrix[j][i];
		}
		if (sum != sumRows || sum != sumCols)
			return false;
	}
	return true;
}

int main()
{
	int matrix[n][n];
	enterMatrix(matrix);

	if (checkIfMagic(matrix))
		cout << "yes, it is magic!" << endl;
	else
		cout << "no, it ain't magic!" << endl;

}
