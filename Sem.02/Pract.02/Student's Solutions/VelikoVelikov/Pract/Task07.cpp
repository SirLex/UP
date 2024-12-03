#include <iostream>

using namespace std;

int main()
{
    char symbol;
    cin >> symbol;

    if ((symbol >= 'a' && symbol <= 'z') || (symbol >= 'A' && symbol <= 'Z'))
    {
        if (symbol >= 'a' && symbol <= 'z')
        {
            cout << "The upper case of the letter is " << (char)(symbol - 32);
        }
        if (symbol >= 'A' && symbol <= 'Z')
        {
            cout << "The lower case of the letter is " << (char)(symbol + 32);
        }
    }
    else
    {
        cout << "It is not a letter!";
    }
}