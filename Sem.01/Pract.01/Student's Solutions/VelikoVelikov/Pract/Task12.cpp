#include <iostream>

using namespace std;

int main()
{
    int seconds;
    cout << "Seconds: ";
    cin >> seconds;

    int days = seconds / (24 * 60 * 60);
    int hours = (seconds - 1 * (days * 24 * 60 * 60)) / (60 * 60);
    int minutes = (seconds - 1 * (days * 24 * 60 * 60) - 1 * (hours * 60 * 60)) / 60;
    seconds = (seconds - 1 * (days * 24 * 60 * 60) - 1 * (hours * 60 * 60) - 1 * (minutes * 60));

    cout << "Days: " << days << endl
        << "Hours: " << hours << endl
        << "Minutes: " << minutes << endl
        << "Seconds: " << seconds << endl;
}