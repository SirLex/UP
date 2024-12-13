#include <iostream>
using namespace std;

const int MAXSIZE = 1024;

int strlen (char* str) {
    if (str == nullptr) {
        return -1;
    }
    int len = 0;
    while (*str != '\0') {
        len ++;
        *str ++;
    }
    return len;
}

int CounterOfWordInText(char* text, char* word, int lenOfWord) {
    if (text == nullptr || word == nullptr) {
        cout << "Error!";
        return -1;
    }

    int counter = 0;
    for (int i = 0; text[i] != '\0'; i++) {
        int iCounter = i;
        for (int j = 0; word[j] != '\0'; j++) {
            if (text[i] == word[j]) {
                counter++;
                i++;
            }else {
                break;
            }
        }
        i = iCounter;
    }
    return counter / lenOfWord;
}

int main() {
    char text[MAXSIZE];
    char word[MAXSIZE];
    cout << "Enter the strings: ";
    cin.getline(text, MAXSIZE);
    cin.getline(word, MAXSIZE);

    int lenOfWord = strlen(word);
    cout << CounterOfWordInText(text, word, lenOfWord) << endl;
    return 0;
}
