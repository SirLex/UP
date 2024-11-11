// zad1Part2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

bool IsPrime(int num) {

	for (int j = 2; j <= sqrt(num); j++)
	{
		if (num % j == 0 ) {
			return false;
		}
	}

	return true;
}

int main()
{
    unsigned int n;
    cin >> n;

	for (int i = 2; i <= n; i++)
	{
		int num1 = 6 * i + 1;
		int num2 = 6 * i - 1;

		if (IsPrime(num1) && IsPrime(num2)) {
			cout << num2 << " " << num1 << endl;
		}
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
