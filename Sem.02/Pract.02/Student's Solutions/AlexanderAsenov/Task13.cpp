// Zad13.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;

    int n1 = (num / 1000) * 10 + (num % 10);
    int n2 = ((num / 100) % 10) * 10 + ((num / 10) % 10);

    if (n1 < n2) {
        cout << "Less (" << n1 << "<" << n2 << ")" << endl;
    }
    else if (n1 == n2) {
        cout << "Equal (" << n1 << "=" << n2 << ")" << endl;
    }
    else {
        cout << "Greater (" << n1 << ">" << n2 << ")" << endl;
    }

}