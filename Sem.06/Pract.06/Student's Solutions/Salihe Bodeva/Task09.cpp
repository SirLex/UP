// Task09.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

const int key = 51926;

int encodeNumber(int number, int key) {

	return number ^ key;

}

int main()
{
	cout << "Enter a number: ";
	int number;
	cin >> number;

	cout << "Code: " << encodeNumber(10, key) << "//you choose key " << key;
}
