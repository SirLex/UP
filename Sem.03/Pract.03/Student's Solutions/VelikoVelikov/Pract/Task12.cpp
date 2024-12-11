#include <iostream>

using namespace std;

int main()
{
    int number;
    cin >> number;

    int temp = number, reversed = 0;
    int len = 0;

    while (temp > 0) {
        reversed = reversed * 10 + temp % 10;
        temp /= 10;
        len++;
    }

    int result = 0, factor = 1;
    int middle = len / 2;
    temp = reversed;

    for (int i = 0; i < len; i++) {
        if (!(len % 2 == 1 && i == middle) && !(len % 2 == 0 && (i == middle || i == middle - 1))) {
            result = result * 10 + temp % 10;
        }
        temp /= 10;
    }

    cout << result << ", ";
    result++;
    cout << result;
}