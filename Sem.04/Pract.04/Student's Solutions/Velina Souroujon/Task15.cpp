#include <iostream>
using namespace std;

long pow(long num, unsigned int n)
{
    int result = 1;

    for (int i = 0; i < n; i++)
    {
        result *= num;
    }

    return result;
}

int main()
{
    int n;
    unsigned int k;
    cin >> n >> k;
    cout << pow(n, k);

    return 0;
}
