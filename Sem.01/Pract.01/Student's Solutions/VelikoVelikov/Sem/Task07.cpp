
#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;
    int count100 = n / 100;
    n %= 100;

    int count50 = n / 50;
    n %= 50;

    int count20 = n / 20;
    n %= 20;

    int count10 = n / 10;
    n %= 10;

    int count5 = n / 5;
    n %= 5;

    int count2 = n / 2;
    n %= 2;

    int count1 = n;

    cout << count100 << "x100lv ";
    cout << count50 << "x50lv ";
    cout << count20 << "x20lv ";
    cout << count10 << "x10lv ";
    cout << count5 << "x5lv ";
    cout << count2 << "x2lv ";
    cout << count1 << "x1lv ";
    cout << endl;
}
