// zad6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int n  = -1;

	while (n < 0 || n > 100) {
		cout << "Enter n [0, 100] : ";
		cin >> n;
	}

	int guess;
	cout << "Try guessing n: ";
	cin >> guess;
	
	while (guess != n) {
		if (n < guess){
			cout << "n is less than " << guess << endl;
		}
		else if (n > guess) {
			cout << "n is more than " << guess << endl;
		}

		cout << "Try guessing n: ";
		cin >> guess;
	}

	cout << "You won!!!" << endl;;

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
