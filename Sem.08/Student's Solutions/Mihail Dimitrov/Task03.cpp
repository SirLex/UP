#include <iostream>
using namespace std;

void ConvertNum(long& num) {
    long b = 0;
    while (num != 0) {
        b = b * 10 + num % 10;
        num /= 10;
    }
    num = b;
}

int main()
{
    long b = 32114452;
    cout << b << endl;
    ConvertNum(b);
    cout << b;
}
