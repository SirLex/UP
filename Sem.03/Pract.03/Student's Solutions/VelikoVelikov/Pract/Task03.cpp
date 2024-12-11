#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;

    int square = n * n;
    int result = 0;

    while (square != 0)
    {
        result = result * 10 + square % 10;
        square /= 10;
    }
    cout << result;
}
