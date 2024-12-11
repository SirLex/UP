#include <iostream>

using namespace std;

int main()
{
    int n, m; cin >> m >> n;

    int end = m * n;

    for (int i = 1; i <= end;)
    {
        for (int k = 0; k < n; i++, k++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}