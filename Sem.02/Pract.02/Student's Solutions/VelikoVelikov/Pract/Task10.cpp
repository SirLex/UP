#include <iostream>

using namespace std;

int main()
{
    double a, b;
    char operation;
    cin >> a >> b;

    cout << "Choose the binary operation (+, -, *, /): ";
    cin >> operation;

    switch (operation)
    {
    case '+': cout << "The result is: " << a + b; break;
    case '-': cout << "The result is: " << a - b; break;
    case '*': cout << "The result is: " << a * b; break;
    case '/':
        if (b != 0) cout << "The result is: " << a / b;
        else cout << "Nah fam you can't divide by 0, nuh-uh!";
        break;
    default: cout << "What is this operation you want to use homie?"; break;
    }
}