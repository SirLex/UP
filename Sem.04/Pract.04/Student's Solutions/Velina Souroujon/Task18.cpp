#include <iostream>
using namespace std;

const int MIN_NUMBER = pow(10, 2);
const int MAX_NUMBER = pow(10, 5);

int abs(int n)
{
    return n >= 0
        ? n
        : - 1 * n;
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

bool isInInterval(int num, int from, int to)
{
    return num >= from && num <= to;
}

int askUser(int from, int to)
{
    int num;

    cout << "Enter number between " << from << " and " << to << ": ";
    cin >> num;

    while (!isInInterval(num, from, to))
    {
        cout << "The number is not between " << from << " and " << to << "! Please enter the number again: ";
        cin >> num;
    }

    return num;
}

int closestToPowerOfTwo(int num)
{
    int power = 0;
    int previousPowerOfTwo = 1;
    int powerOfTwo = 1;

    while (num >= powerOfTwo)
    {
        power++;
        previousPowerOfTwo = powerOfTwo;
        powerOfTwo = pow(2, power);
    }

    if (abs(num - powerOfTwo) <= abs(num - previousPowerOfTwo))
    {
        return powerOfTwo;
    }

    return previousPowerOfTwo;
}

int main()
{
    int num = askUser(MIN_NUMBER, MAX_NUMBER);
    cout << closestToPowerOfTwo(num);

    return 0;
}