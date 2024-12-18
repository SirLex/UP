#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d, e; cin >> a >> b >> c >> d >> e;

    for (int i = -100; i <= 100; i++)
    {
        int horner = (((a * i + b) * i + c) * i + d) * i + e;
        if (horner >= 0)
            cout << i << " ";
    }
}