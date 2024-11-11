// zad5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int countDigits(int num) {
    int result = 0;

    do {
        num /= 10;
        result++;
    } while (num > 0);

    return result;
}

int pow(int a, int b) {
    if (b == 0) {
        return 1;
    }

    return a * pow(a, b - 1);
}

bool isPreffix(int n, int k) {
    int kDigitsCount = countDigits(k);
    int nDigitsCount = countDigits(n);

    while (nDigitsCount != kDigitsCount) {
        n /= 10 ;
        nDigitsCount = countDigits(n);
    }

    if (n == k) {
        return true;
    }


    return false;
}

int main()
{
    int n, k;
    cin >> n >> k;

    if (isPreffix(n, k)) {
        cout << "true";
    }
    else {
        cout << "false";
    }
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
