#include <iostream>

using namespace std;

const int maxSize = 1024;

bool isContainedWord(char* symbols, char* word) {
    if (symbols == nullptr || word == nullptr) {
        return false;
    }

    while (*word != '\0') {
        if (*word != *symbols) {
            return false;
        }
        word++;
        symbols--;
    }

    return true;

}

bool doExist(char* symbols, char* word) {
    
    if (symbols == nullptr || word == nullptr) {
        return false;
    }
    int count = 0;
    while (*symbols != '\0') {
        count++;
        symbols++;
    }
    
    
    cout << endl;
    while (count > 0) {
    
        if (isContainedWord(symbols, word)) {
            return true;
        }
        
        symbols--;
        count--;
    }
    return false;
}

int main()
{
    char symbols[maxSize];
    char word[maxSize];

    cout << "Enter symbols:";
    cin.getline(symbols, maxSize);

    cout << "Enter words:";
    cin.getline(word, maxSize);
    cout << endl;
    cout << doExist(symbols, word);
} 
