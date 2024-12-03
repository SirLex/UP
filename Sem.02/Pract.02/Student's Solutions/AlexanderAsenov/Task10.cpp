// Zad10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    double num1, num2;
    char operation;

    cout << "Enter number operation and number: ";
    cin >> num1 >> operation >> num2;

    double answer;
    
    switch(operation){
    case '+':
        answer = num1 + num2;
        break;
    case '-':
        answer = num1 - num2;
        break;
    case '*':
        answer = num1 * num2;
        break;
    case '/':
        if (num2 == 0) {
            cout << "Invalid operation!";
            return 0;
        }
        answer = num1 / num2;
        break;
    default:
        cout << "Invalid operation!";
        return 0;
    }

    cout << num1 << " " << operation << " " << num2 << " = " << answer << endl;

}