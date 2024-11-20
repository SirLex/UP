// Zad12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int secondsInAMinute = 60;
	int minutesInAHour = 60;
	int hoursInADay = 24;

	int days, hours, minutes, seconds, enteredSeconds;
	
	cout << "Seconds: ";
	cin >> enteredSeconds;

	minutes = enteredSeconds / secondsInAMinute;
	seconds = enteredSeconds % secondsInAMinute;

	hours = minutes / minutesInAHour;
	minutes = minutes % minutesInAHour;

	days = hours / hoursInADay;
	hours = hours % hoursInADay;

	cout << days << " days, " << hours << " hours, " << minutes << " minutes and " << seconds << " seconds";




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
