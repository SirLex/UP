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

void printPrimesSmallerThan(int num)
{
	if (num >= ONLY_EVEN_PRIME_NUM)
	{
		cout << ONLY_EVEN_PRIME_NUM << " ";
	}

	for (int i = 3; i <= num; i += 2)
	{
		if (isPrime(i))
		{
			cout << i << " ";
		}
	}
}

void sumOfTwoPrimeNumbers(int number)
{
	for (int num1 = 2; num1 < number; num1++)
	{
		if (!isPrime(num1))
		{
			continue;
		}

		int num2 = number - num1;
		if (isPrime(num2))
		{
			cout << number << " = " << num1 << " + " << num2;
			return;
		}
	}

	cout << number << " can't be represented as a sum of two prime numbers!";
}

int main()
{
	int n;
	cin >> n;

	printPrimesSmallerThan(n);
	cout << endl;
	sumOfTwoPrimeNumbers(n);

	return 0;
}
