
#include <iostream>

using namespace std;

bool isBinarySubstring(int n, int k)
{
    int kBits = 0;
    int tempK = k;
    while (tempK > 0) {
        tempK >>= 1;
        kBits++;
    }
    int mask = (1 << kBits) - 1;
    while (n >= k) {
        if ((n & mask) == k) {
            return true;
        }
        n >>= 1;
    }
    return false;
}

int main()
{
    int n, k; cin >> n >> k;
    cout << isBinarySubstring(n, k);
}
