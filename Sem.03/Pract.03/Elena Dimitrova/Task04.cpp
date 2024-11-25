#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;
    int result = 1;

    for (int i = 1; i <= num; i++) {
        result *= i;
    }

    cout << result << endl;

}