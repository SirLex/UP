#include <iostream>

using namespace std;

int main()
{
    long long cardNum; cin >> cardNum;

    int secredCardNum = cardNum % 10000;

    cout << "XXXXXXXXXXXX" << secredCardNum;
}