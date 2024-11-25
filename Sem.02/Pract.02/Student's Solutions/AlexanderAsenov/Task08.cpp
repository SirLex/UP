// Zad8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int num;
	cout << "Arabic numeral: ";
	cin >> num;

	switch (num) {
	case 1:
		cout << "Roman numerals: " << "I" << endl;
		break;
	case 2:
		cout << "Roman numerals: " << "II" << endl;
		break;
	case 3:
		cout << "Roman numerals: " << "III" << endl;
		break;
	case 4:
		cout << "Roman numerals: " << "IV" << endl;
		break;
	case 5:
		cout << "Roman numerals: " << "V" << endl;
		break;
	case 6:
		cout << "Roman numerals: " << "VI" << endl;
		break;
	case 7:
		cout  << "Roman numerals: "<< "VII" << endl;
		break;
	case 8:
		cout << "Roman numerals: " << "VIII" << endl;
		break;
	case 9:
		cout << "Roman numerals: " << "IX" << endl;
		break;
	case 10:
		cout << "Roman numerals: " << "X" << endl;
		break;
	default:
		cout << "Can't convert" << endl;
		break;
	}
}