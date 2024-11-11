// zad18.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int lengthOfALine = 2;
	for (int i = 1; i <= n; i++)
	{
		int j = i;
		while (j > 0) {
			j /= 10;
			lengthOfALine++;
		}
	}


	for (int i = 0; i < lengthOfALine; i++)
	{
		cout << "#";
	}

	cout << endl;

	for (int i = 0; i < n; i++)
	{
		
		cout << "#";

		for (int j = i + 1; j < n + 1; j++)
		{
			cout << j;
		}

		for (int j = 1; j <= i; j++)
		{
			cout << j;
		}
		cout << "#" << endl;
	}

	cout << "#";
	
	if (n % 2 == 0) {
		for (int i = 0; i < (lengthOfALine - 2) / 2 - 1; i++)
		{
			cout << " ";
		}

		cout << "XX";

		for (int i = 0; i < (lengthOfALine - 2) / 2 - 1; i++)
		{
			cout << " ";
		}

		int nDigits = 0;
		int nCopy = n;
		while (nCopy > 0) {
			nCopy /= 10;
			nDigits++;
		}

		if (nDigits % 2 == 0) {
			cout << " ";
		}

	}
	else {

		for (int i = 0; i < (lengthOfALine - 2) / 2; i++)
		{
			cout << " ";
		}

		cout << "X";

		for (int i = 0; i < (lengthOfALine - 2) / 2; i++)
		{
			cout << " ";
		}

	}

	cout << "#" << endl;

	for (int i = n - 1; i >= 0; i--)
	{

		cout << "#";

		for (int j = i + 1; j < n + 1; j++)
		{
			cout << j;
		}

		for (int j = 1; j <= i; j++)
		{
			cout << j;
		}
		cout << "#" << endl;
	}

	for (int i = 0; i < lengthOfALine; i++)
	{
		cout << "#";
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
