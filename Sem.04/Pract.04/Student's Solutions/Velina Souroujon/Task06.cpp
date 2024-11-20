#include <iostream>
using namespace std;

bool isLetter(char ch)
{
    return (ch >= 'A' && ch <= 'Z')
        || (ch >= 'a' && ch <= 'z');
}

bool isCapitalLetter(char ch)
{
    return (ch >= 'A' && ch <= 'Z');
}

int main()
{
    char symbol;
    cin >> symbol;

    if (!isLetter(symbol))
    {
        cout << "The symbol isn't a letter!";
    }
    else
    {
        if (isCapitalLetter(symbol))
        {
            cout << "Capital letter";
        }
        else
        {
            cout << "Not capital letter";
        }
    }

    return 0;
}
