#include <iostream>

using namespace std;

bool CompareMatrixes(int* matr1[], int r1, int c1, int* matr2[], int r2, int c2)
{
    if (r1 != r2 || c1 != c2)
    {
        return false;
    }
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            if (matr1[i][j] != matr2[i][j])
                return false;
        }
    }
    return true;
}

void InputMatrix(int** matrix, int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> matrix[i][j];
        }
    }
}

int main()
{
    int r1, c1; cin >> r1 >> c1;

    int** matrix1 = new int*[r1];
    for (int i = 0; i < r1; i++)
    {
        matrix1[i] = new int[c1];
    }

    int r2, c2; cin >> r2 >> c2;

    int** matrix2 = new int* [r2];
    for (int i = 0; i < r2; i++)
    {
        matrix2[i] = new int[c2];
    }

    InputMatrix(matrix1, r1, c1);
    InputMatrix(matrix2, r2, c2);

    cout << CompareMatrixes(matrix1, r1, c1, matrix2, r2, c2);

    for (int i = 0; i < r1; i++)
    {
        delete[] matrix1[i];
    }
    delete[] matrix1;

    for (int i = 0; i < r2; i++)
    {
        delete[] matrix2[i];
    }
    delete[] matrix2;
}