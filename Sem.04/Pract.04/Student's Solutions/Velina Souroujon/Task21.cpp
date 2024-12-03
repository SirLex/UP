#include <iostream>
using namespace std;

const int ONLY_EVEN_PRIME_NUM = 2;

bool isPrime(int number)
{
    if (number == 1)
    {
        return false;
    }

    for (int divisor = 2; divisor < number; divisor++)
    {
        if (number % divisor == 0)
        {
            return false;
        }
    }

    return true;
}

int nextPrimeNumber(int num)
{
    if (num < ONLY_EVEN_PRIME_NUM)
    {
        return ONLY_EVEN_PRIME_NUM;
    }

    int possiblePrimeNum = num % 2 == 0
        ? num + 1
        : num + 2;

    while (!isPrime(possiblePrimeNum))
    {
        possiblePrimeNum += 2;
    }

    return possiblePrimeNum;
}

void printDecomposition(int num)
{
    int primeNum = 2;

    while (true)
    {
        if (num % primeNum == 0)
        {
            cout << primeNum;
            num /= primeNum;

            if (num == 1)
            {
                break;
            }

            cout << ".";
        }
        else
        {
            primeNum = nextPrimeNumber(primeNum);
        }
    }
}

int main()
{
    int num;
    cin >> num;
    printDecomposition(num);

    return 0;
}
