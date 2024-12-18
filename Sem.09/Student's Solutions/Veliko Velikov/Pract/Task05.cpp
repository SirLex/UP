#include <iostream>

using namespace std;

void Input(int** arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		int m; cin >> m;
		arr[i] = new int[m + 1];
		for (int j = 1; j < m + 1; j++)
		{
			cin >> arr[i][j];
		}
		arr[i][0] = m;
	}
}

int** ConcatMatrix(int* arr[], int n)
{
	int** concated = new int* [n];
	for (int row = 0; row < n; row++)
	{
		int length1 = arr[row][0];
		int length2 = arr[n - row - 1][0];
		concated[row] = new int[length1 + length2];
		for (int col1 = 0; col1 < length1; col1++)
		{
			concated[row][col1] = arr[row][col1 + 1];
		}
		for (int col2 = 0; col2 < length2; col2++)
		{
			concated[row][length1 + col2] = arr[n - row - 1][col2 + 1];
		}
	}

	return concated;
}

void PrintMatrix(int* matr[], int n, int* arr[])
{
	for (int i = 0; i < n; i++)
	{
		int length1 = arr[i][0];
		int length2 = length1 + arr[n - i - 1][0];
		for (int k = 0; k < length2; k++)
		{
			cout << matr[i][k] << " ";
		}
		cout << endl;
	}
}

int main()
{
	int n; cin >> n;
	int** arr = new int* [n];
	Input(arr, n);
	int** concated = ConcatMatrix(arr, n);
	PrintMatrix(concated, n, arr);

}