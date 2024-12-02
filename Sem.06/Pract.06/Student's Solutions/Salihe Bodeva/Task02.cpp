// Task01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int getTheOnesInBinaryNumber(int number) {

	int count = 0;
	int checker = 1;

	while (number > 0)
	{
		int lastBit = number & checker;
		if (lastBit == 1)
		{
			count++;
		}
		number >>= 1;
	}
	return count;

}

int main()
{
	int number = 189;

	cout << getTheOnesInBinaryNumber(number);
}
