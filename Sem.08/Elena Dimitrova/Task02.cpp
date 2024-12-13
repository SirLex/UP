#include <iostream>
using namespace std;

const int MAXSIZE = 1024;

int CheckStr(char str[]) {
    if (str == nullptr) {
        return -1;
    }

    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    if (len < 2) {
        return -1;
    }

    const int possitiveChar = 127;
    int ocurrances[possitiveChar] = {0};
    for (int i = 0; i < len; i++) {
        ocurrances[str[i]]++;
    }

    int odd_ctr = 0;
    for (int j = 0; j < possitiveChar; j++) {
        if (ocurrances[j] % 2 == 1) {
            odd_ctr++;
        }
    }

    return odd_ctr <= 1;
}

int main() {
    char str[MAXSIZE];
    cin.getline(str, MAXSIZE);

    cout << CheckStr(str);

    return 0;
}