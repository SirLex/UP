#include <iostream>
using namespace std;

const int ROWS = 4;
const int COLS = 5;

void printSpiral(int arr[ROWS][COLS])
{
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = i; j < COLS - i; j++)
        {
            cout << arr[i][j] << " ";
        }

        for (int j = i + 1; j < ROWS - i; j++)
        {
            cout << arr[j][COLS - i - 1] << " ";
        }

        for (int j = i + 1; j < COLS - i; j++)
        {
            cout << arr[ROWS - i - 1][COLS - j - 1] << " ";
        }

        for (int j = i + 1; j < ROWS - i - 1; j++)
        {
            cout << arr[ROWS - j - 1][i] << " ";
        }
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

    printSpiral(arr);
}