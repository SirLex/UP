#include <iostream>
using namespace std;

const int ROWS = 3;
const int COLS = 4;

void printOnZigZag(int arr[ROWS][COLS])
{
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            if (i % 2 == 0)
            {
                cout << arr[i][j] << " ";
            }
            else
            {
                cout << arr[i][COLS - j - 1] << " ";
            }
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
        }
    }

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;
    printOnZigZag(arr);
}