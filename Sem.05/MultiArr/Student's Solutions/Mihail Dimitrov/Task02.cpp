#include <iostream>
using namespace std;

const int SIZE = 3;

void printMainDiagonal(int arr[SIZE][SIZE])
{
    for (int i = 0; i < SIZE; i++)
    {
        cout << arr[i][i] << " ";
    }
}

void printSecondaryDiagonal(int arr[SIZE][SIZE])
{
    for (int i = 0; i < SIZE; i++)
    {
        cout << arr[i][SIZE - i - 1] << " ";
    }
}

int main()
{
    int arr[SIZE][SIZE]{};

    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            arr[i][j] = i * SIZE + j + 1;
        }
    }

    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;
    printMainDiagonal(arr);
    cout << endl;
    printSecondaryDiagonal(arr);
}