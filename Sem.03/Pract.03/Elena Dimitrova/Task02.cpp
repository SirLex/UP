#include <iostream>
using namespace std;

int main() {
    int num;
    int remain;
    cin >> num;
    for (int i = 1; i < num; i++) {
             remain = num - i;
             cout << "x = " << i << " y = " << remain << endl;
     }
}