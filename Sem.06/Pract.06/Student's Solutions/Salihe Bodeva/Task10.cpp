// Task10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int changeAtPostion(int number, int position, int bit) {

	int mask = 1 << position;

	if (bit==1)
	{
		return number | mask;
	}
	else
	{
		return (number & (~mask));
	}

}

int main()
{
	cout << changeAtPostion(120,4,0);
}
