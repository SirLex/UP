#include <iostream>
using namespace std;

void ConvertNum(long &num) {
    long converted = 0;
    while (num > 0) {
        cout << converted << endl;
        converted = converted * 10 + num % 10;
        num /= 10;
    }
    num = converted;
}

int main() {
    long num;
    cin >> num;

    cout << num << endl;
    ConvertNum(num);
    cout << num << endl;

    return 0;
}