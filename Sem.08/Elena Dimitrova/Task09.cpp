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

void getWord(char *str, char *result) {
    if (str == nullptr || result == nullptr) return;

    int lenStr = getLen(str);
    int counterOfLetters = 0;
    int longestWord = 0;
    int indexOfLongestWord = 0;

    for (int i = 0; i <= lenStr; i++) {
        if (str[i] != ' ' && str[i] != '\t' && str[i] != '\0') {
            counterOfLetters++;
        }else {
            if (counterOfLetters > longestWord) {
                longestWord = counterOfLetters;
                indexOfLongestWord = i - longestWord;
            }
            counterOfLetters = 0;
        }
    }
    for (int j = 0; j < longestWord; j++) {
        result[j] = str[indexOfLongestWord + j];
    }
    result[longestWord] = '\0';
    cout << result << endl;
}

int main() {
    char str[MAX_SIZE];
    char result[MAX_SIZE];
    cout << "Enter a string: ";
    cin.getline(str, MAX_SIZE);

    getWord(str, result);


    return 0;
}