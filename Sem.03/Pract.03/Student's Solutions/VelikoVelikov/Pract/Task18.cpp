#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;

    if (n <= 0) {
        cout << "Invalid input";
        return 0;
    }
    //Горна рамка
    for (int i = 0; i < n+2; i++)
    {
        cout << "#";
    }
    cout << endl;
    //Горна част(прав ред)
    for (int i = 1; i <= n; i++)
    {
        cout << "#";
        for (int k = i; k <= n; k++)
        {
            cout << k;
        }
        for (int k = 1; k < i; k++)
        {
            cout << k;
        }
        cout << "#" << endl;
    }
    //Център
    cout << "#";
    if (n % 2 == 0)
    {
        for (int i = 0; i < n / 2 - 1; i++)
        {
            cout << " ";
        }
        cout << "XX";
        for (int i = 0; i < n / 2 - 1; i++)
        {
            cout << " ";
        }
    }
    if (n % 2 == 1)
    {
        for (int i = 0; i < (n / 2); i++)
        {
            cout << " ";
        }
        cout << "X";
        for (int i = 0; i < (n / 2); i++)
        {
            cout << " ";
        }
    }
    cout << "#" << endl;
    //Долна част(обърнат ред)
    for (int i = n; i > 0; i--)
    {
        cout << "#";
        for (int k = i; k > 0; k--)
        {
            cout << k;
        }
        for (int k = n; k > i; k--)
        {
            cout << k;
        }
        cout << "#" << endl;
    }
    //Долна рамка
    for (int i = 0; i < n + 2; i++)
    {
        cout << "#";
    }
    cout << endl;
}
