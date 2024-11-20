#include <iostream>
using namespace std;

int getDigitsSum(long long num)
{
    int sum = 0;

    while (num != 0)
    {
        int lastDigit = num % 10;
        num /= 10;

        sum += lastDigit;
    }

    return sum;
}

int oneDigitSum(long long num)
{
    int digitsSum = getDigitsSum(num);

    while ((digitsSum / 10) != 0)
    {
        digitsSum = getDigitsSum(digitsSum);
    }

    return digitsSum;
}

int main()
{
    long long num;
    cin >> num;
    cout << oneDigitSum(num);

    return 0;
}
