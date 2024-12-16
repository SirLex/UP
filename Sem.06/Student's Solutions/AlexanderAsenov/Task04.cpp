#include <iostream>

using namespace std;

int getCodedNum(int n, int k) {
    int mask = 1;
    for (int i = 1; i < k; i++)
    {
        mask = mask << 1;
        mask++;
    }

    return n & mask;
}

int main()
{
    int n, k;
    cin >> n >> k;
    cout << getCodedNum(n, k) << endl;
}