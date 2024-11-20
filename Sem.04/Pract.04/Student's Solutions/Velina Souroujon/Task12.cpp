#include <iostream>
using namespace std;

void swap(int& first, int& second)
{
    int temp = first;
    first = second;
    second = temp;
}

int leastCommonMultiple(int a, int b)
{
    if (a == 0 || b == 0)
    {
        return 0;
    }
    if (a < b)
    {
        swap(a, b);
    }

    int lcm = a;
    while (lcm % b != 0)
    {
        lcm += a;
    }

    return lcm;
}

int leastCommonMultiple(int a, int b, int c)
{
    int lcmAB = leastCommonMultiple(a, b);
    int lcmABC = leastCommonMultiple(lcmAB, c);

    return lcmABC;
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    cout << leastCommonMultiple(a, b, c);

    return 0;
}
