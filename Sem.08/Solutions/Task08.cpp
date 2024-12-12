double calculateMatrix(int** matr, int m) {
	if (!matr || m < 1) return -1; // :/

	double diagonalSum = 0;

	for (int i = 0; i < m; i++) {
		diagonalSum += matr[i][i] + matr[i][m - i - 1];
	}

	return diagonalSum;
}