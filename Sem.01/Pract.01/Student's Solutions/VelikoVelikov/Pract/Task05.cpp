#include <iostream>

using namespace std;

int main()
{
    int first, second;

    cout << "Enter the first number: ";
    cin >> first;

    cout << "Enter the second number: ";
    cin >> second;

    cout << boolalpha << (first < second);
}
