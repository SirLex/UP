#include <iostream>
using namespace std;

const int MAXSIZE = 1024;

int getLen(char* str) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}


void checkStr(char *str, char *dest) {
    if (str == nullptr || dest == nullptr) {
        return;
    }

    int len = getLen(str);
    const int asciiTableLen = 128;
    const int ENOUGH_OCCURENCES = 2;
    char reaptingChar[asciiTableLen] = {};

    for (int i = 0; i < len; i++) {
        reaptingChar[str[i]]++;
    }

    int repeatingIdx = 0;
    for (int j = 0; j < asciiTableLen; j++) {
        if (reaptingChar[j] >= ENOUGH_OCCURENCES) {
           dest[repeatingIdx] = j;
            repeatingIdx++;
        }
    }
    dest[repeatingIdx] = '\0';

}

int main() {
    char str[MAXSIZE];
    char dest[MAXSIZE];
    cin.getline(str, MAXSIZE);
    checkStr(str, dest);
    cout << dest << endl;

    return 0;
}