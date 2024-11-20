#include <iostream>
using namespace std;

void print(char s, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << s;
    }
}

int main()
{
    char symbol;
    int n;
    cin >> symbol >> n;

    print(symbol, n);

    return 0;
}