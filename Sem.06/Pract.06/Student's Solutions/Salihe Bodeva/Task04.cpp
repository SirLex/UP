// Task03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int getLastPositionNumber(int number, int k) {
	
	int mask = 0;
	for (int i = 0; i < k; i++)
	{
		mask <<= 1;
		mask += 1;
	}

	return number & mask;

}


int main()
{
	cout << getLastPositionNumber(189,4);
}
