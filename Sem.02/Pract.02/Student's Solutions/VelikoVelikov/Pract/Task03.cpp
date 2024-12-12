#include <iostream>

using namespace std;

int main()
{
    int num1, num2;
    cin >> num1 >> num2;

    int check_check = (num1 > num2) ? num1 : num2;

    cout << "The greater number is " << check_check;
}