#include <iostream>
using namespace std;

int to_lower(char S) {
    S -= 'A' - 'a';
    return S;
}

int to_upper (char S) {
    S -= 'a' - 'A';
    return S;
}

int main() {
    char S;
    cin >> S;
    if (S >= 'A' && S <= 'Z' ) {
        cout << char (to_lower(S));
    } else {
        cout << char (to_upper(S));
    }

}