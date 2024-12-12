double calculateMainDiagonal(int** matr, int m)
{
	double sum = 0;
	for (int i = 0; i < m; i++)
	{
		sum += matr[i][i];
	}
	return sum;
}

double CalculateSecondDiagonal(int** matr, int m)
{
	double sum = 0;
	for (int i = 0; i < m; i++)
	{
		sum += matr[i][m - 1 - i];
	}
	return sum;
}

double calculateMatrix(int** matr, int m)
{
	double sum = calculateMainDiagonal(matr, m) + CalculateSecondDiagonal(matr, m);
	return sum;
}
