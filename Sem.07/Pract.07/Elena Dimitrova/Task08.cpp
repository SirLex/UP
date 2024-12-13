#include <iostream>
using namespace std;

const int MAXSIZE = 1024;

int findIndexOfWordInText(char* text, char* word) {
    if (text == nullptr || word == nullptr) {
        cout << "Error!";
        return -1;
    }

    int index = 0;
    int lenOfStrToFind = 0;
    for (int i = 0; text[i] != '\0'; i++) {
        if (text[i] == *word) {
            word++;
            lenOfStrToFind++;
            index = i;
        }
    }
    return index - lenOfStrToFind + 1;
}

int main() {
    char text[MAXSIZE];
    char word[MAXSIZE];
    cout << "Enter the strings: ";
    cin.getline(text, MAXSIZE);
    cin.getline(word, MAXSIZE);
    cout << findIndexOfWordInText(text, word) << endl;
    return 0;
}
