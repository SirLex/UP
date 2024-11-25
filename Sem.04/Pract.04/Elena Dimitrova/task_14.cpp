#include <iostream>
using namespace std;

int ask_user (int from, int to) {
    int num;
    while (true) {
        cout << "Enter a number:";
        cin >> num;
        if (from <= num && num <= to) {
            return num;
        }
        cout << "Try again!" << endl;
    }
}

int main() {
    int from, to;
    cin >> from >> to;
    cout << ask_user(from, to) << endl;

}