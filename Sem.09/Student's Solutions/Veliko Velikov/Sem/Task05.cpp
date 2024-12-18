#include <iostream>

using namespace std;

int** Transponate(int* matrix[], int n, int m)
{
    int** matrixt = new int* [m];
    for (int i = 0; i < m; i++)
    {
        matrixt[i] = new int[n];
    }

    for (int i = 0; i < m; i++)
    {
        for (int k = 0; k < n; k++)
        {
            matrixt[i][k] = matrix[k][i];
        }
    }

    return matrixt;
}

int main()
{
    int n, m; cin >> n >> m;
    int** matrix = new int*[n];
    for (int i = 0; i < n; i++)
    {
        matrix[i] = new int[m];
    }

    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < m; k++)
        {
            cin >> matrix[i][k];
        }
    }

    int** matrixt = Transponate(matrix, n, m);

    for (int i = 0; i < n; i++)
    {
        delete[] matrix[i];
    }
    delete[] matrix;

    for (int i = 0; i < m; i++)
    {
        for (int k = 0; k < n; k++)
        {
            cout << matrixt[i][k];
        }
    }

    for (int i = 0; i < m; i++)
    {
        delete[] matrixt[i];
    }
    delete[] matrixt;
}