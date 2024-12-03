#include <iostream>

using namespace std;

int main()
{
    int input;
    cin >> input;

    int result = 0;

    while (input != 0)
    {
        result *= 10;
        result += (input % 10);
        input /= 10;

    }
    result += 1;
    cout << result;
}