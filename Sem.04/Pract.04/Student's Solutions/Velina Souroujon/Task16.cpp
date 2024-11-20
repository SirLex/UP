#include <iostream>
using namespace std;

double calculate(int a, int b, char action = '+')
{
    switch (action)
    {
    case '-':
        return a - b;

    case '*':
        return a * b;

    case '/':
        return a / b;

    case '%':
        return a % b;

    default:
        return a + b;
    }
}

int main()
{
    int a, b;
    char op;
    cin >> a >> b >> op;
    cout << calculate(a, b, op);

    return 0;
}