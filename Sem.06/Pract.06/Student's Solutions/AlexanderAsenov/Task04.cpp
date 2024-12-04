#include <iostream>
using namespace std;

const int BYTESIZE = 8;

int lastBits(unsigned int num, int lastBits) {
    unsigned int result = num;
    int positionsToShift = sizeof(int) * BYTESIZE - lastBits;
      
    result = result << positionsToShift;
    result = result >> positionsToShift;

    return result;
}

int main()
{
    int n, k;
    cin >> n >> k;
    cout << lastBits(n, k) << endl;
}