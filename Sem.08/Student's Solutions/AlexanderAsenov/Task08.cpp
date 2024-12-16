#include <iostream>
using namespace std;


int** readMatrix(int size) {
    int** matrix = new int* [size];

    for (int i = 0; i < size; i++)
    {
        matrix[i] = new int[size];

        for (int j = 0; j < size; j++)
        {
            cin >> matrix[i][j];
        }
    }

    return matrix;
}

double CalculateMatrix(int** matr, int m) {
    if (matr == nullptr) {
        return 0;
    }

    int sum = 0;

    for (size_t i = 0; i < m; i++)
    {
        sum += matr[i][i];
    }

    for (size_t i = 0; i < m; i++)
    {
        sum += matr[i][m - i - 1];
    }

    return sum;
}

void deleteMatrix(int** matrix, int size) {
    for (int i = 0; i < size; i++)
    {
        delete[] matrix[i];
    }

    delete[] matrix;
}

int main()
{
    int size;
    cin >> size;

    int** matrix = readMatrix(size);

    cout << CalculateMatrix(matrix, size);

    deleteMatrix(matrix, size);
}