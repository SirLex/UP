#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;

    for (int i = 1; i < n; i++)
    {
        for (int k = 1; k <= i; k++)
        {
            cout << k << " ";
        }
        for (int k = 0; k < 3 * n - 2 * i; k++)
        {
            cout << "  ";
        }
        for (int k = i; k > 0; k--)
        {
            cout << k << " ";
        }
        cout << endl;
    }

    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
    }
    for (int i = 1; i <= n; i++)
    {
        cout << "- ";
    }
    for (int i = n; i > 0; i--)
    {
        cout << i << " ";
    }
    cout << endl;

    for (int i = n-1; i > 0; i--)
    {
        for (int k = 1; k <= i; k++)
        {
            cout << k << " ";
        }
        for (int k = 0; k < 3 * n - 2 * i; k++)
        {
            cout << "  ";
        }
        for (int k = i; k > 0; k--)
        {
            cout << k << " ";
        }
        cout << endl;
    }
}