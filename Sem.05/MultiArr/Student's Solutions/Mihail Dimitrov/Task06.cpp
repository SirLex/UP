#include <iostream>
using namespace std;

const int SIZE = 3;

bool isMagicCube(int arr[SIZE][SIZE])
{
    int sum = 0;
    for (int i = 0; i < SIZE; i++)
    {
        sum += arr[i][0];
    }

    for (int i = 0; i < SIZE; i++)
    {
        int newSumRow = 0;
        int newSumCol = 0;
        for (int j = 0; j < SIZE; j++)
        {
            newSumRow += arr[i][j];
            newSumCol += arr[j][i];
        }
        if (sum != newSumCol || sum != newSumRow)
        {
            return false;
        }
    }

    int sumMainDiagonal = 0;
    int sumSecondDiagonal = 0;
    for (int i = 0; i < SIZE; i++)
    {
        sumMainDiagonal += arr[i][i];
        sumSecondDiagonal += arr[i][SIZE - i - 1];
    }
    if (sum != sumMainDiagonal || sum != sumSecondDiagonal)
    {
        return false;
    }

    return true;
}

int main()
{
    int arr[SIZE][SIZE] = {{2, 7, 6}, {9, 5, 1}, {4, 3, 8}};

    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl
         << isMagicCube(arr);
}