#include <iostream>

using namespace std;

int main()
{
    int number; cin >> number;

    if (number <= 0) {
        cout << "Invalid input";
        return 0;
    }


    bool first = true;

    int maxbitsize = 30;

    for (int i = maxbitsize; i >= 0; i--) {
        int powerOfTwo = 1 << i;
        if (number >= powerOfTwo) {
            if (!first) {
                cout << " + ";
            }
            cout << "2^" << i;
            number -= powerOfTwo;
            first = false;
        }
    }
}