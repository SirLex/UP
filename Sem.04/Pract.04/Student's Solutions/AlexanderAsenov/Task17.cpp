// zad17.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int gcd(int a, int b) {
	if (b == 0) {
		return a;
	}

	return gcd(b, a % b);
}

int gcd(int a, int b, int c) {
	return gcd(gcd(a, b), c);
}

int gcd(int a, int b, int c, int d) {
	return gcd(gcd(a, b), gcd(c, d));
}


int enterWhileZero(int n) {
	while (n == 0) {
		cout << "one of the numbers is 0. Enter it again ";
		cin >> n;
	}

	return n;
}

int main()
{
	unsigned int a, b, c, d;
	cin >> a >> b >> c >> d;
	a = enterWhileZero(a);
	b = enterWhileZero(b);
	c = enterWhileZero(c);
	d = enterWhileZero(d);

	cout << gcd(a, b, c, d) << endl;;
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
