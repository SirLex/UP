#include <iostream>

using namespace std;

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
        delete[] matrix[i];
    }
    delete[] matrix;
}