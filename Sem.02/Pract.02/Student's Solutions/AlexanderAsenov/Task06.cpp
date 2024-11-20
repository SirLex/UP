// Zad6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double a, b, c;
	cout << "Enter the coeficients: ";
	cin >> a >> b >> c;

	double d = pow(b, 2) - 4 * a * c;

	if (d > 0) {
		double squareRootD = sqrt(d);
		double x1 = (-b + squareRootD) / (2 * a);
		double x2 = (-b - squareRootD) / (2 * a);
		
		cout << "x1 = " << x1 << endl;
		cout << "x2 = " << x2 << endl;
	}
	else if (d == 0) {
		double x = -b / (2 * a);
		cout << "x1 = x2 = " << x << endl;
	}
	else {
		cout << "There are no solutions in real numbers";
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
