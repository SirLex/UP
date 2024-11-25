// zad18.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

bool isInInterval(int input, int min, int max) {
	return min <= input && input <= max;
}

int askUser(int min, int max) {
	int input;
	do {
		cout << "Please enter number between " << min << " and " << max << " ";
		cin >> input;

	} while (!isInInterval(input, min, max));

	return input;
}

bool checkIsPowerOfTwo(int n) {
	while (n % 2 == 0) {
		n /= 2;
	}

	return n == 1;
}

int findClosestPowerOfTwo(int n) {
	if (checkIsPowerOfTwo(n)) {
		return n;
	}

	int i = 1;

	while (true) {
		if (checkIsPowerOfTwo(n-i)) {
			return n - i;
		}

		if (checkIsPowerOfTwo(n+i)) {
			return n + i;
		}

		i++;
	}

	//How did you even got here
	return -1;

}


int main()
{
	int n = askUser(100, 100000);
	cout << findClosestPowerOfTwo(n) << endl;
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
