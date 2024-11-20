#include <iostream>
using namespace std;

int getDigitsCount(int n)
{
    if (n == 0)
    {
        return 1;
    }

    int count = 0;

    while (n != 0)
    {
        n /= 10;
        count++;
    }

    return count;
}

int main()
{
    int num;
    cin >> num;
    cout << getDigitsCount(num);

    return 0;
}
