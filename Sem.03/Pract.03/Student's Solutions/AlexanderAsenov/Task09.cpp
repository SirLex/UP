// zad9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int n;
	char symbol;
	cin >> n >> symbol;

	for (int i = 1; i < n; i+=2)
	{
		for (int j = 0; j < (n - i) / 2; j++)
		{
			cout << " ";
		}

		for (int j = 0; j < i; j++)
		{
			cout << symbol;
		}

		cout << endl;
	}

	for (int i = (n % 2 == 0) ? n - 3 : n; i >= 0; i -= 2)
	{
		for (int j = 0; j < (n - i) / 2; j++)
		{
			cout << " ";
		}

		for (int j = 0; j < i; j++)
		{
			cout << symbol;
		}

		cout << endl;
	}

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu