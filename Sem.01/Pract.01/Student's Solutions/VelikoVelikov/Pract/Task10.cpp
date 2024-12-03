#include <iostream>

using namespace std;

int main()
{
    float first, second;

    cout << "Enter the first number: ";
    cin >> first;

    cout << "Enter the second number: ";
    cin >> second;

    float temp = first;

    first = second;
    second = temp;

    cout << "The switched numbers are: " << endl
        << "First - " << first << endl
        << "Second - " << second << endl;
}