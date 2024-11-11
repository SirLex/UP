// zad13.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int countDigits(int n) {
	int result = 0;
	while (n > 0) {
		n /= 10;
		result++;
	}
	
	return result;

}

int pow1(int base, int power) {
	if (power == 0) {
		return 1;
	}

	return base * pow1(base, power - 1);
}

int concat(int first, int second) {
	return first * pow(10, countDigits(second)) + second;
}

int main()
{
	int num1, num2;
	cin >> num1 >> num2;
	cout << concat(num1, num2) << endl;
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
