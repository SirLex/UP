#include <iostream>

using namespace std;

int main()
{
    int n;cin >> n;

    int factors[100];
    int powers[100];
    int count = 0;

    int original = n;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            factors[count] = i;
            powers[count] = 0;
            while (n % i == 0) {
                powers[count]++;
                n /= i;
            }
            count++;
        }
    }
    if (n > 1) {
        factors[count] = n;
        powers[count] = 1;
        count++;
    }
    for (int i = count - 1; i >= 0; i--) {
        cout << factors[i] << "^" << powers[i];
        if (i > 0) {
            cout << " ";
        }
    }
}