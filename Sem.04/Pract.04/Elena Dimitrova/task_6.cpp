#include <iostream>
using namespace std;

int check_symbol (char S) {
    return (S >= 'a' && S <= 'z') || (S >= 'A' && S <= 'Z');
}

int capital_letter (char S) {
   return S >= 'A' && S <= 'Z';
}

int main() {
    char S;
    cin >> S;
    if (check_symbol(S)) {
        if (capital_letter(S)) {
            cout << "Is capital!";
        } else {
            cout << "Is not capital!";
        }

    }
    else {
        cout << "The input is not a letter" << endl;
    }


}