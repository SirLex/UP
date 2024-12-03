#include <iostream>

using namespace std;

int main()
{
    cout << "Enter the amount of money you want to convert: ";
    float Money;
    cin >> Money;
    float USDMultiplier = 1.78;
    float EURMultiplier = 1.96;

    cout << "What currency do you want to convert it to? (USD/EUR)";
    string Currency;
    cin >> Currency;
    if (Currency == "USD")
    {
        cout << Money << "Leva is " << USDMultiplier * Money << "USD" << endl;
    }
    else
    {
        if (Currency == "EUR")
        {
            cout << Money << "Leva is " << EURMultiplier * Money << "EUR" << endl;
        }
        else
        {
            cout << "Invalid currency!" << endl;
        }
    }
}
