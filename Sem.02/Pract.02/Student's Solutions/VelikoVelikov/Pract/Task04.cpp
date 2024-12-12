#include <iostream>

using namespace std;

int main()
{
    int result;
    cin >> result;


    if (result >= 90)
        cout << "6+";
    else if (result >= 80)
        cout << "6";
    else if (result >= 70)
        cout << "5";
    else if (result >= 60)
        cout << "4";
    else if (result >= 40)
        cout << "3";
    else
        cout << "2";
}