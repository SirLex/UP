#include <iostream>

using namespace std;

int main()
{
    int firstNum, secondNum;

    cout << "Enter the first number: ";
    cin >> firstNum;

    cout << "Enter the second number: ";
    cin >> secondNum;

    cout << "The product of their division is " << firstNum / secondNum << " and the left-over is " << firstNum % secondNum;
}