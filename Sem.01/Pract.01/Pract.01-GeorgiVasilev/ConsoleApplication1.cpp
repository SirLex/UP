// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	
	long long cardNum;
	cin >> cardNum;

	long long lastFourDigits = cardNum % 10000;

	cout << "XXXXXXXXXXXX" << lastFourDigits << endl;
}

