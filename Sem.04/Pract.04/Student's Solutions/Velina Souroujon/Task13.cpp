#include <iostream>
using namespace std;

long pow(long n, int k)
{
    int result = 1;

    for (int i = 0; i < k; i++)
    {
        result *= n;
    }

    return result;
}

int digitsCount(int n)
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

int concat(int first, int second)
{
    int concatedNum = first;
    int power = digitsCount(second) - 1;

    while (power >= 0)
    {
        int digitToAdd = (second / pow(10, power)) % 10;
        concatedNum = 10 * concatedNum + digitToAdd;
        power--;
    }

    return concatedNum;
}

int main()
{
    int firstNum, secondNum;
    cin >> firstNum >> secondNum;
    int concatedNumber = concat(firstNum, secondNum);
    cout << concatedNumber;

    return 0;
}
