#include <iostream>
using namespace std;

const int SIZE = 3;

bool isTriangular(int arr[SIZE][SIZE])
{
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[i][j] != 0)
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    int arr[SIZE][SIZE] = {{1, 2, 3}, {0, 5, 6}, {0, 0, 9}};

    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << isTriangular(arr);
}