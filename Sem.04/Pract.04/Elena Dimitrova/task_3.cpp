#include <iostream>
using namespace std;

bool isPositive(int num) {
    if (num > 0) {
        cout << "Positive" <<  endl;
    } else {
        cout << "Not positive" <<  endl;
    }
    return 0;
}

bool isNegative(int num) {
    num < 0 ? cout << "Negative" <<  endl : cout << "Not negative" <<  endl;
    return 0;
}

int main() {
    int num;
    cin >> num;
    isPositive(num);
    isNegative (num);


}