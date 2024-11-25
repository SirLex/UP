#include <iostream>
using namespace std;

int len(int n) {
    int counter = 0;
    while (n > 0) {
        n /= 10;
        ++counter;
    }
    return counter;
}

int main() {
    int n;
    cin >> n;
    len(n);
    cout << len(n) << endl;

}