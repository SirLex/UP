#include <iostream>
using namespace std;

bool square(int n) {
    int i = 0;
    while (i * i <= n) {
        if (i * i == n) {
            return true;
        }
        i++;
    }
    return false;
}

int main() {
    int n;
    cin >> n;
    if ((square(n))) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }

}