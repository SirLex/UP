#include <iostream>
using namespace std;

const int SIZE = 3;

double calculateMatrix(int **matr, int m)
{
    if (matr == nullptr || m < 0)
    {
        return -1;
    }
    int sum = 0;
    for (size_t i = 0; i < m; i++)
    {
        sum += matr[i][i] + matr[i][m - i - 1];
    }
    return sum;
}

int main()
{
    int **matrix = new int *[SIZE];

    for (int i = 0; i < SIZE; i++)
    {
        matrix[i] = new int[SIZE];
    }

    for (size_t i = 0; i < SIZE; i++)
    {
        for (size_t j = 0; j < SIZE; j++)
        {
            matrix[i][j] = i * SIZE + j + 1;
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << calculateMatrix(matrix, SIZE);
}
