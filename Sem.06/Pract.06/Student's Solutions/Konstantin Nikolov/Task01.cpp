#include <iostream>
using namespace std;

int toPower(int num, int power)
{	
	int result = 1;
	for (int i = 0; i < power; i++)
	{
		result *= num;
	}
	return result;
}

void convertToBase10From(unsigned base, int& number)
{
	int result = 0;
	int counter = 0;
	while (number > 0)
	{
		result += (number % 10) * toPower(base, counter);
		counter++;
		number /= 10;
	}
	number = result;
}

int reverse(int num)
{
	int result = 0;
	while (num > 0)
	{
		result *= 10;
		result += num % 10;
		num /= 10;
	}
	return result / 10;
}

void convertToBase(unsigned base, int& number)
{
	int result = 2;
	while (number > 0)
	{
		int remainder = number % base;
		result *= 10;
		result += remainder;
		number /= base;
	}
	number = reverse(result);
}

void convert(unsigned fromBase, unsigned toBase, int& number)
{
	if (fromBase > 10 || toBase > 10)
	{
		cout << "Invalid base" << endl;
	}
	convertToBase10From(fromBase, number);
	convertToBase(toBase, number);
}

int main()
{
	int number = 10;
	convert(3, 2, number);
	cout << number;
}