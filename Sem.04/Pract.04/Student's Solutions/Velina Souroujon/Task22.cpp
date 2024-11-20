#include <iostream>
using namespace std;

const int FIRST_DIGIT = 0;
const int LAST_DIGIT = 9;

int digitCount(int number, int digit)
{
    if (number == 0 && digit == 0)
    {
        return 1;
    }

    int count = 0;

    while (number != 0)
    {
        int lastDigit = number % 10;
        number /= 10;

        if (lastDigit == digit)
        {
            count++;
        }
    }

    return count;
}

int sortedNumber(int num)
{
    int sortedNum = 0;

    for (int digit = FIRST_DIGIT; digit <= LAST_DIGIT; digit++)
    {
        int currentDigitCount = digitCount(num, digit);

        for (int i = 0; i < currentDigitCount; i++)
        {
            sortedNum = 10 * sortedNum + digit;
        }
    }
    return sortedNum;
}

int main()
{
    int num;
    cin >> num;
    cout << sortedNumber(num);

    return 0;
}