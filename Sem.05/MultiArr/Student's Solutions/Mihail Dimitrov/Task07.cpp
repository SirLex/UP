#include <iostream>
using namespace std;

const int ROWS = 2;
const int COLS = 3;

void sumMatrixes(int arr1[ROWS][COLS], int arr2[ROWS][COLS])
{
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            cout << arr1[i][j] + arr2[i][j] << " ";
        }
        cout << endl;
    }
}

void multiplyMatrixByNumber(int arr[ROWS][COLS], int number)
{
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            cout << arr[i][j] * number << " ";
        }
        cout << endl;
    }
}

int main()
{
    int arr1[ROWS][COLS] = {{1, 2, 3}, {4, 5, 6}};
    int arr2[ROWS][COLS] = {{5, 6, 7}, {8, 9, 10}};

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;
    sumMatrixes(arr1, arr2);
    cout << endl;
    multiplyMatrixByNumber(arr1, 3);
}