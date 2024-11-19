#include<iostream>
using namespace std;

const int N = 3, M = 2;

void sum(int m1[M][N], int m2[M][N], int result[M][N])
{
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			result[i][j] = m1[i][j] + m2[i][j];
		}
	}
}

void multiply(int m1[M][N], int k, int result[M][N])
{
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			result[i][j] = m1[i][j] * k;
		}
	}
}

int main()
{
	int m1[M][N] = { {1,2,3},{4, 5, 6} };
	int k = 10;
	int result[M][N];
	multiply(m1, k, result);
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cout << result[i][j] << " ";
		}
		cout << endl;
	}
}