// Task04.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int contains(int number, int target) {

	while (number > 0)
	{
		bool lastDigitOfNumber = number & 1;
		bool lastDigitOfTarget = target & 1;
		if (target <= 0)
		{
			break;
		}

		if (lastDigitOfNumber ^ lastDigitOfTarget)
		{
			return false;
		}

		number >>= 1;
		target >>= 1;
	}
	return true;
}

int main()
{
	cout << contains(13,7);
}
