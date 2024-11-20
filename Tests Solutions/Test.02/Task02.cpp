#include <iostream>

using namespace std;

const size_t MATRIX_MAX_SIZE = 4;

void readMatrix(int matrix[MATRIX_MAX_SIZE][MATRIX_MAX_SIZE]) {
	for (size_t i = 0; i < MATRIX_MAX_SIZE; i++)
		for (size_t j = 0; j < MATRIX_MAX_SIZE; j++)
			cin >> matrix[i][j];
}

int sumOfSubmatrix(int matrix[MATRIX_MAX_SIZE][MATRIX_MAX_SIZE], size_t submatrixBegRowInd, size_t submatrixBegColInd, size_t submatrixRows, size_t submatrixCols) {
	if (submatrixBegRowInd + submatrixRows > MATRIX_MAX_SIZE || submatrixBegColInd + submatrixCols > MATRIX_MAX_SIZE) {
		cout << "Error! Invalid submatrix!";
		return -1;
	}

	size_t lastRow = submatrixBegRowInd + submatrixRows;
	size_t lastCol = submatrixBegColInd + submatrixCols;
	int sum = 0;

	for (size_t i = submatrixBegRowInd; i < lastRow; i++)
		for (size_t j = submatrixBegColInd; j < lastCol; j++)
			sum += matrix[i][j];

	return sum;
}

int largestSumFromSubmatrixes(int matrix[MATRIX_MAX_SIZE][MATRIX_MAX_SIZE], size_t submatrixRows, size_t submatrixCols, size_t& submatrixBegRowInd, size_t& submatrixBegColInd) {
	int largestSum = sumOfSubmatrix(matrix, 0, 0, submatrixRows, submatrixCols);
	submatrixBegRowInd = 0;
	submatrixBegColInd = 0;

	size_t maxRowInd = MATRIX_MAX_SIZE - submatrixRows;
	size_t maxColInd = MATRIX_MAX_SIZE - submatrixCols;

	for (size_t i = 0; i <= maxRowInd; i++) {
		for (size_t j = 0; j <= maxColInd; j++) {
			if (i == 0 && j == 0) continue;

			int currentSum = sumOfSubmatrix(matrix, i, j, submatrixRows, submatrixCols);

			if (currentSum > largestSum) {
				largestSum = currentSum;
				submatrixBegRowInd = i;
				submatrixBegColInd = j;
			}
		}
	}

	return largestSum;
}

int main() {
	int matrix[MATRIX_MAX_SIZE][MATRIX_MAX_SIZE];

	cout << "Enter matrix:\n";
	readMatrix(matrix);

	size_t Q, P;

	cout << "Enter Q and P (Q,P <= 4): ";
	cin >> Q >> P;

	if (Q == 0 || Q > MATRIX_MAX_SIZE || P == 0 || P > MATRIX_MAX_SIZE) {
		cout << "Error! Invalid input!";
		return 0;
	}

	size_t submatrixRowInd, submatrixColInd;

	cout << largestSumFromSubmatrixes(matrix, Q, P, submatrixRowInd, submatrixColInd) << ' ';
	cout << '(' << submatrixRowInd << ',' << submatrixColInd << ')';

	return 0;
}
