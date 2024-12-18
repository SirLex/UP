#include <iostream>

using namespace std;

int** MatrixMult(int* matrixnm[], int n, int m, int* matrixpq[], int p, int q)
{
	int** matrixnq = new int* [n];
	for (int i = 0; i < n; i++)
	{
		matrixnq[i] = new int[q];
	}

	for (int i = 0; i < n; i++)
	{
		for (int k = 0; k < q; k++)
		{
			matrixnq[i][k] = 0;
			for (int j = 0; j < m; j++)
			{
				matrixnq[i][k] += matrixnm[i][j] * matrixpq[k][j];
			}
		}
	}

	return matrixnq;
}

int main()
{
	int n, m, p, q; cin >> n >> m;

	int** matrixnm = new int* [n];
	for (int i = 0; i < n; i++)
	{
		matrixnm[i] = new int[m];
	}

	for (int i = 0; i < n; i++)
	{
		for (int k = 0; k < m; k++)
		{
			cin >> matrixnm[i][k];
		}
	}

	cin >> p >> q;

	int** matrixpq = new int* [p];
	for (int i = 0; i < p; i++)
	{
		matrixnm[i] = new int[q];
	}

	for (int i = 0; i < p; i++)
	{
		for (int k = 0; k < q; k++)
		{
			cin >> matrixpq[i][k];
		}
	}
	if (m == p)
	{
		int** matrixnq = MatrixMult(matrixnm, n, m, matrixpq, p, q);
		for (int i = 0; i < n; i++)
		{
			for (int k = 0; k < q; k++)
			{
				cout << matrixnq[i][k];
			}
		}
	}
	else
		cout << "The matrixes can't be multiplied!";


	
	for (int i = 0; i < n; i++)
	{
		delete[] matrixnm[i];
	}
	delete[] matrixnm;

	for (int i = 0; i < p; i++)
	{
		delete[] matrixpq[i];
	}
	delete[] matrixpq;
}