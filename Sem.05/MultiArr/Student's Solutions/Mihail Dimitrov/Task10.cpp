#include <iostream>
using namespace std;

const int ROWS = 3;
const int COLS = 3;

void rotateMatrix(int arr[ROWS][COLS])
{
    int copy[ROWS][COLS]{};
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            copy[i][j] = arr[i][j];
        }
    }

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            arr[i][j] = copy[ROWS - j - 1][i];
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int arr[ROWS][COLS]{};

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            arr[i][j] = i * COLS + j + 1;
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    rotateMatrix(arr);
}