#include <iostream>
using namespace std;

void concat (int first, int second) {
    cout << first << second << endl;
}

int main() {
    int first, second;
    cin >> first >> second;
    concat(first, second);
}