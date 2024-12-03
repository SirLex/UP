#include <iostream>

using namespace std;

int main()
{
    int first;
    cin >> first;

    int secondaryOne, secondaryTwo;

    secondaryOne = (first / 1000) * 10 + first % 10;
    secondaryTwo = ((first / 100) % 10) * 10 + (first % 100) / 10;

    if (secondaryOne > secondaryTwo)
    {
        cout << secondaryOne << ">" << secondaryTwo;
    }
    if (secondaryOne == secondaryTwo)
    {
        cout << secondaryOne << "=" << secondaryTwo;
    }
    if (secondaryOne < secondaryTwo)
    {
        cout << secondaryOne << "<" << secondaryTwo;
    }
}