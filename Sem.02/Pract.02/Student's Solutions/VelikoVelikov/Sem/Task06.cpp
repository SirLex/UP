#include <iostream>

using namespace std;

int main()
{
    int a1, a2, a3, a4, a5;
    cin >> a1 >> a2 >> a3 >> a4 >> a5;

    if ((a2 >= a1 && a2 >= a3) || (a2 <= a1 && a2 <= a3))
    {
        if ((a3 >= a2 && a3 >= a4) || (a3 <= a2 && a3 <= a4))
        {
            cout << "yes";
        }
        else
        {
            cout << "no";
        }
    }
    else
    {
        cout << "no";
    }
}
