#include <iostream>
using namespace std;

const int MAX_SIZE = 1024;

int getLen(char* str) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

bool doExist(char* symbols, char* word) {
    if (symbols == nullptr || word == nullptr) return false;
    int symbolsLen = getLen(symbols);
    int wordLen = getLen(word);
    if (wordLen > symbolsLen) return false;
    for (int i = symbolsLen - 1; i >= wordLen - 1; i--) {
        for (int j = 0; j < wordLen; j++) {
            if (word[j] != symbols[symbolsLen - i - j]) break;
            if (j == wordLen - 1) return true;
        }
    }
    return false;
}

int main() {
    char symbols[MAX_SIZE];
    char word[MAX_SIZE];
    cin.getline(symbols, MAX_SIZE);
    cin.getline(word, MAX_SIZE);
    cout << doExist(symbols, word);

    return 0;
}