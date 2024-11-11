// zad17.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int maxCountDigits = 0;
	int nCopy = n;
	while (nCopy > 0) {
		nCopy /= 10;
		maxCountDigits++;
	}

	int length = n * 3;

	for (int i = 1; i < n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << j;

			int numberOfDigits = 0;
			int copyOfJ = j;
			while (copyOfJ > 0) {
				copyOfJ /= 10;
				numberOfDigits++;
			}

			for (int k = 0; k < maxCountDigits - numberOfDigits; k++)
			{
				cout << " ";
			}

		}

		for (int j = 0; j < length - 2 * i; j++)
		{
			for (int k = 0; k < maxCountDigits; k++)
			{
				cout << " ";
			}
		}

		for (int j = i; j >= 1; j--)
		{
			cout << j;

			int numberOfDigits = 0;
			int copyOfJ = j;
			while (copyOfJ > 0) {
				copyOfJ /= 10;
				numberOfDigits++;
			}

			for (int k = 0; k < maxCountDigits - numberOfDigits; k++)
			{
				cout << " ";
			}
		}

		cout << endl;
	}

	for (int i = 1; i <= n; i++)
	{
		cout << i;

		int numberOfDigits = 0;
		int copyOfJ = i;
		while (copyOfJ > 0) {
			copyOfJ /= 10;
			numberOfDigits++;
		}

		for (int k = 0; k < maxCountDigits - numberOfDigits; k++)
		{
			cout << " ";
		}
	}

	for (int i = 1; i <= maxCountDigits * n; i++)
	{
		cout << "-";
	}

	for (int i = n; i >= 1; i--)
	{
		cout << i;

		int numberOfDigits = 0;
		int copyOfJ = i;
		while (copyOfJ > 0) {
			copyOfJ /= 10;
			numberOfDigits++;
		}

		for (int k = 0; k < maxCountDigits - numberOfDigits; k++)
		{
			cout << " ";
		}
	}

	cout << endl;


	for (int i = n-1; i >= 1; i--)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << j;

			int numberOfDigits = 0;
			int copyOfJ = j;
			while (copyOfJ > 0) {
				copyOfJ /= 10;
				numberOfDigits++;
			}

			for (int k = 0; k < maxCountDigits - numberOfDigits; k++)
			{
				cout << " ";
			}
		}

		for (int j = 0; j < length - 2 * i; j++)
		{
			for (int k = 0; k < maxCountDigits; k++)
			{
				cout << " ";
			}
		}

		for (int j = i; j >= 1; j--)
		{
			cout << j;

			int numberOfDigits = 0;
			int copyOfJ = j;
			while (copyOfJ > 0) {
				copyOfJ /= 10;
				numberOfDigits++;
			}

			for (int k = 0; k < maxCountDigits - numberOfDigits; k++)
			{
				cout << " ";
			}
		}

		cout << endl;
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
