// Zad12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int day, month;
    cout << "Date: ";
    cin >> day >> month;

	switch (month)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
		if (day > 31) {
			cout << "Invalide day";
			return 0;
		}

		if (day == 31) {
			cout << "Next date: " << 1 << " " << (month + 1);
		}
		else {
			cout << "Next date: " << (day + 1) << " " << month;
		}
		break;

	case 2:
		if (day > 28) {
			cout << "Invalide day";
			return 0;
		}

		if (day == 28) {
			cout << "Next date: " << 1 << " " << (month + 1);
		}
		else {
			cout << "Next date: " << (day + 1) << " " << month;
		}
		break;

	case 4:
	case 6:
	case 9:
	case 11:
		if (day > 30) {
			cout << "Invalide day";
			return 0;
		}

		if (day == 30) {
			cout << "Next date: " << 1 << " " << (month + 1);
		}
		else {
			cout << "Next date: " << (day + 1) << " " << month;
		}
		break;
	case 12:
		if (day > 31) {
			cout << "Invalide day";
			return 0;
		}

		if (day == 31) {
			cout << "Next date: " << 1 << " " << 1;
		}
		else {
			cout << "Next date: " << (day + 1) << " " << month;
		}
		break;

	default:
		cout << "Invalid month" << endl;
		break;
	}


}
