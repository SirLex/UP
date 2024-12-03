// Zad1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int year;
    cout << "Enter a year ";
    cin >> year;

    bool isLeap = false;

    if (year % 4 == 0) {
        if (year % 100 == 0) {
            isLeap = year % 400 == 0;
        }
        else {
            isLeap = true;
        }
    }

    if (isLeap) {
        cout << "Year " << year << " is leap.";
    }
    else {
        cout << "Year " << year << " is not leap.";

    }
}