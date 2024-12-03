#include <iostream>

using namespace std;

int main()
{
    int hrs;
    int mins;
    cin >> hrs >> mins;

    if (mins > 44)
    {
        mins = mins + 15 - 60;
        hrs += 1;
        if (hrs > 23)
        {
            hrs = 0;
        }
    }
    else
    {
        mins += 15;
    }


    if (hrs < 10)
    {
        cout << "0" << hrs;
    }
    else
    {
        cout << hrs;
    }
    cout << ":";
    if (mins < 10)
    {
        cout << "0" << mins;
    }
    else
    {
        cout << mins;
    }
}

