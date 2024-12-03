#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;
    int digitCount[10] = { 0 };
    int original = n;
    while (n > 0) {
        int digit = n % 10;
        digitCount[digit]++;
        n /= 10;
    }
    int maxCount = 0;
    int mostFrequent = 9;
    for (int i = 0; i < 10; i++) {
        if (digitCount[i] > maxCount || (digitCount[i] == maxCount && i < mostFrequent)) {
            maxCount = digitCount[i];
            mostFrequent = i;
        }
    }
    cout << mostFrequent << endl;
}