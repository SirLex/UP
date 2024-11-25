#include <iostream>
using namespace std;

int isEven(int num) {
    return num % 2 == 0;
}

int main() {
    int num;
    cin >> num;
    if (isEven(num) == true) {
        cout << "Even" << endl;
    } else {
        cout << "Odd" << endl;
    }

}