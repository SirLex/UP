#include <iostream>
using namespace std;

const int SIZEOFBYTE = 8;

int getLengthOfNumber(int num) {
    if (num == 0) {
        return 0;
    }

    int count = 0;
    while (num > 0) {
        num = num >> 1;
        count++;
    }
    return count;
}

int saveOnlyLeastSignificantBinaryDigits(unsigned int num, int countOfDigits) {
    num = num << sizeof(int) * SIZEOFBYTE - countOfDigits;
    num = num >> sizeof(int) * SIZEOFBYTE - countOfDigits;
    return num;
}

int isBinarySubstring(int num, int subNumber) {
    if (subNumber == 0) {
        return num == 0 || (num & (num + 1)) != 0;
    }

    int length = getLengthOfNumber(subNumber);

    while (num > 0) {
        if (saveOnlyLeastSignificantBinaryDigits(num, length) == subNumber) {
            return true;
        }

        num = num >> 1;
    }

    return false;
}

int main()
{
    int n, k;
    cin >> n >> k;
    cout << isBinarySubstring(n, k) << endl;
}
