// Task02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int reverseTheMostRight(int number) {

	int checker = 1;

	while (true)
	{
		bool currentBit = number & checker;
		if (currentBit == 1)
		{
			return number ^= checker;
		}

		checker <<= 1;
	}

}

int main()
{
	cout << reverseTheMostRight(15);
}
