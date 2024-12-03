#include <iostream>

using namespace std;

int main()
{
    int numberOne, numberTwo;

    cout << "Enter the first number: ";
    cin >> numberOne;

    cout << "Enter the second number: ";
    cin >> numberTwo;

    if (numberOne > numberTwo)
    {
        cout << "The minimal number is " << numberTwo << endl
            << "The maximal number is " << numberOne << endl;
    }
    else
    {
        if (numberOne == numberTwo)
        {
            cout << "They are equal with value of " << numberOne;
        }
        else
        {
            cout << "The minimal number is " << numberOne << endl
                << "The maximal number is " << numberTwo << endl;
        }
    }
}