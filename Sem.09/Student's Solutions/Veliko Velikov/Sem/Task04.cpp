#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;

    int** matrix = new int* [n];
    for (int i = 0; i < n; i++)
    {
        matrix[i] = new int[n];
    }

    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < n; k++)
        {
            cin >> matrix[i][k];
        }
    }

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < n; k++)
        {
            if (i < k)
            {
                sum += matrix[i][k];
            }
        }
    }

    cout << sum;

    for (int i = 0; i < n; i++)
    {
        delete[] matrix[i];
    }
    delete[] matrix;
}