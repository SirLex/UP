#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;

    num *= num;
    int a = 0;
    while (num != 0) {
        a *= 10;
        a += num % 10;
        num /= 10;
    }
    cout << a << endl;

}