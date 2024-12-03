#include <iostream>
using namespace std;

bool isInInterval(int num, int from, int to)
{
    return num >= from && num <= to;
}

int askUser(int from, int to)
{
    int num;

    cout << "Enter number between " << from << " and " << to << ": ";
    cin >> num;

    while (!isInInterval(num, from, to))
    {
        cout << "The number is not between " << from << " and " << to << "! Please enter the number again: ";
        cin >> num;
    }

    return num;
}

int main()
{
    cout << askUser(10, 20);

    return 0;
}
