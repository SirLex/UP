#include <iostream>

using namespace std;

int main()
{
    int n, m, q; cin >> n >> m >> q;

    int*** cube = new int**[n];

    for (int i = 0; i < n; i++)
    {
        cube[i] = new int* [m];
        for (int k = 0; k < m; k++)
        {
            cube[i][k] = new int[q];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < m; k++)
        {
            delete[] cube[i][k];
        }
        delete[] cube[i];
    }
    delete[] cube;
}