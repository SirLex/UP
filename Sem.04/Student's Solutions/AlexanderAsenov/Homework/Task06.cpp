// zad6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<cmath>;
using namespace std;

bool isPrime(int n) {
	if (n == 0 || n == 1) {
		return false;
	}
	
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0) {
			return false;
		}
	}

	return true;
}

int numberOfNumsWithKDividers(int a, int b, int k) {
	int result = 0;

	for (int i = a; i <= b; i++)
	{
		int countOfDividers = 0;
		for (int j = 2; j <= i; j++)
		{
			if (i % j == 0 && isPrime(j)) {
				countOfDividers++;
			}
		}

		if (countOfDividers == k) {
			result++;
		}
	}

	return result;
}

int main()
{
	int a, b, k;
	cin >> a >> b >> k;
	cout << numberOfNumsWithKDividers(a, b, k);
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
