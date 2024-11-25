#include <iostream>
using namespace std;

int k_of_num(int n, int k) {
    int number;
    int count = 0;
    while (n > 0) {
        number = n % 10;
        n /= 10;
        ++count;
        if (count == k) {
            return number;
        }
    }
}

int main() {
    int n, k;
    cin >> n >> k;
    cout << k_of_num(n, k) << endl;

}