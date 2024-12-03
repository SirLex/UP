#include <iostream>

using namespace std;

int main()
{
    int day, month;
    cin >> day >> month;

    switch (month)
    {
    case 1:
        if (day == 31)
        {
            day = 1;
            ++month;
        }
        else
        {
            day += 1;
        }
        break;

    case 2:
        if (day == 28)
        {
            day = 1;
            ++month;
        }
        else
        {
            day += 1;
        }
        break;

    case 3:
        if (day == 31)
        {
            day = 1;
            ++month;
        }
        else
        {
            day += 1;
        }
        break;

    case 4:
        if (day == 30)
        {
            day = 1;
            ++month;
        }
        else
        {
            day += 1;
        }
        break;

    case 5:
        if (day == 31)
        {
            day = 1;
            ++month;
        }
        else
        {
            day += 1;
        }
        break;

    case 6:
        if (day == 30)
        {
            day = 1;
            ++month;
        }
        else
        {
            day += 1;
        }
        break;

    case 7:
        if (day == 31)
        {
            day = 1;
            ++month;
        }
        else
        {
            day += 1;
        }
        break;

    case 8:
        if (day == 31)
        {
            day = 1;
            ++month;
        }
        else
        {
            day += 1;
        }
        break;

    case 9:
        if (day == 30)
        {
            day = 1;
            ++month;
        }
        else
        {
            day += 1;
        }
        break;

    case 10:
        if (day == 31)
        {
            day = 1;
            ++month;
        }
        else
        {
            day += 1;
        }
        break;

    case 11:
        if (day == 30)
        {
            day = 1;
            ++month;
        }
        else
        {
            day += 1;
        }
        break;

    case 12:
        if (day == 31)
        {
            day = 1;
            month = 1;
        }
        else
        {
            day += 1;
        }
        break;

    default: break;
    }

    cout << "The day and month of the year are: " << day << "." << month;
}