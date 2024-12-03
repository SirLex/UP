#include <iostream>
using namespace std;

int sqrt(int number)
{
    if (number < 0)
    {
        return -1;
    }

    int sRoot = 0;
    while (number >= sRoot)
    {
        if (sRoot * sRoot == number)
        {
            return sRoot;
        }

        sRoot++;
    }

    return -1;
}

int main()
{
    int n;
    cin >> n;
    int sqrtValue = sqrt(n);
    if (sqrtValue == -1)
    {
        cout << n << " - no (?^2)";
    }
    else
    {
        cout << n << " - yes (" << sqrtValue << "^2)";
    }

    return 0;
}
