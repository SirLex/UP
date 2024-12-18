#include <iostream>

using namespace std;

bool isPerfect(int num) {
    int sum = 1;
    for (int i = 2; i <= num / 2; ++i) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return sum == num && num != 1;
}

int main() {
    int m, n;
    cin >> m >> n;

    for (int i = m; i <= n; ++i) {
        if (isPerfect(i)) {
            cout << i << endl;
        }
    }
    cout << endl;
    return 0;
}