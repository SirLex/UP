#include <iostream>
using namespace std;

int getLen(long num) {
    int len = 0;
    while(num != 0) {
        num = num / 10;
        len++;
    }
    return len;
}

void NumToChar(char *numToStr, long num) {
    if (numToStr == nullptr) {
        return;
    }
    int numLen = getLen(num);
    int a = 0;
    for (int i = 0; i < numLen; i++) {
        a = num % 10;
        num /= 10;
        numToStr[i] = a + '0';
    }
}

int NumCalc(long num, int k, int l) {
    int numLen = getLen(num);
    if (numLen < 1 || numLen > 10) {
        return -1;
    }

    const int MAX_LEN = 10;
    char numStr[MAX_LEN];
    NumToChar(numStr, num);
    int sum = 0;
    sum = (numStr[numLen - k - 1] + numStr[numLen - k - 1]) - '0';
    return sum;

}

int main() {
    long num;
    cout << "Enter a number: ";
    cin >> num;
    int k, l;
    cin >> k >> l;

    cout << (NumCalc(num, k, l)) - '0' << endl;


    return 0;
}