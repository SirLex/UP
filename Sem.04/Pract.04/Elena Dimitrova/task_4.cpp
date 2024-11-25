#include <iostream>
using namespace std;

int abs (int num) {
    if (num < 0) {
        return -num;
    }
    return num;
}

int fabs (double num1) {
    if (num1 < 0) {
        return -1 * num1;
    }
    return num1;

}

int main() {
    int num;
    double num1;
    cin >> num;
    cout << abs (num) << endl;
    cout << fabs (num1);

}