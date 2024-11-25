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

long pow(long n, int k)
{
    int result = 1;

    for (int i = 0; i < k; i++)
    {
        result *= n;
    }

    return result;
}

int getDigit(int number, int k)
{
    int digitsCount = getDigitsCount(number);
    int numLastDigitK = number / pow(10, digitsCount - k);

    return numLastDigitK % 10;
}

int main()
{
    int num, k;
    cin >> num >> k;
    cout << getDigit(num, k);

    return 0;
}
