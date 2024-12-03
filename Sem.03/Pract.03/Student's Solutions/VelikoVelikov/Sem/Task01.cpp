#include <iostream>

using namespace std;

int main()
{
    int sum = 0;
    int input;
    cin >> input;

    while (input != 0)
    {
        sum += input;
        cin >> input;
    }

    cout << sum;
}