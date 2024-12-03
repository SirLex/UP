#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;
    int divisor = n;
    bool result = true;
    while (divisor > 1 || result == true)
    {
        if (n % divisor == 0)
        {
            result = false;
        }
    }

    cout << result;
}