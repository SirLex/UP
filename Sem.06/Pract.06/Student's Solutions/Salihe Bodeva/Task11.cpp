// Task11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int changeNum(int number, int position) {

	int mask = 1 << position;

	return number ^ mask;

}

int main()
{
	cout << changeNum(54,1);
}
