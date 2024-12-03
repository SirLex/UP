#include <iostream>
using namespace std;

const int ROWS = 3;
const int COLS = 4;

int smallestElement(int arr[ROWS][COLS])
{
    int smallestElement = arr[0][0];
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            if (smallestElement > arr[i][j])
            {
                smallestElement = arr[i][j];
            }
        }
    }
    return smallestElement;
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

    cout << endl
         << smallestElement(arr);
}