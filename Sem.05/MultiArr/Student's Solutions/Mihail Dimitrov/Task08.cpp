#include <iostream>
using namespace std;

const int ROWS_1 = 3;
const int COLS_1 = 3;

const int ROWS_2 = 3;
const int COLS_2 = 4;

void multiplyMatrixes(int arr1[ROWS_1][COLS_1], int arr2[ROWS_2][COLS_2], int result[ROWS_1][COLS_2])
{
    if (ROWS_2 != COLS_1)
    {
        cout << "Incorrect matrix sizes";
        return;
    }

    for (int i = 0; i < ROWS_1; i++)
    {
        for (int j = 0; j < COLS_2; j++)
        {
            int sum = 0;

            for (int k = 0; k < COLS_1; k++)
            {
                sum += arr1[i][k] * arr2[k][j];
            }

            result[i][j] = sum;
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int arr1[ROWS_1][COLS_1]{};
    int arr2[ROWS_2][COLS_2]{};

    for (int i = 0; i < ROWS_1; i++)
    {
        for (int j = 0; j < COLS_1; j++)
        {
            arr1[i][j] = i * COLS_1 + j + 1;
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    for (int i = 0; i < ROWS_2; i++)
    {
        for (int j = 0; j < COLS_2; j++)
        {
            arr2[i][j] = i * COLS_2 + j + 1;
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    int result[ROWS_1][COLS_2];

    multiplyMatrixes(arr1, arr2, result);
}