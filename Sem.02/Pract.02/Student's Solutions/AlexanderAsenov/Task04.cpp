// Zad4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int percentage;
	cout << "Result: ";
	cin >> percentage;

	if (percentage > 100 || percentage < 0) {
		cout << "Invalid percentage!";
		return 0;
	}

	if (percentage >= 90) {
		cout << "Grade: " << "6+" << endl;
	}
	else if (percentage >= 80) {
		cout << "Grade: " << "6" << endl;
	}
	else if (percentage >= 70) {
		cout << "Grade: " << "5" << endl;
	}
	else if (percentage >= 60) {
		cout << "Grade: " << "4" << endl;
	}
	else if(percentage >= 40) {
		cout << "Grade: " << "3" << endl;
	}
	else {
		cout << "Grade: " << "2" << endl;
	}
}