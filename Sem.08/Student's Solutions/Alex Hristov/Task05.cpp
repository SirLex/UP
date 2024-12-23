#include <iostream>

using namespace std;

const int MaxSize = 1024;

int strLen(char*  str){
    int count = 0;
    
    while(*str != '\0'){
        count++;
        str++;
    }
    
    
    return count;
}

char* checkStr(char* str) {
    if (str == nullptr) {
        return nullptr;
    }

    int countOfSymbols[256] = {};

    while (*str != '\0') {
        countOfSymbols[*str]++;
        str++;
    }

    int counter = 0;
    for (int i = 0; i < 256; i++) {
        if (countOfSymbols[i] > 1) {
            counter++;
        }
    }

    char* repeatingSymbols = new char[counter];

    int index = 0;
    for (int i = 0; i < 256; i++) {
        if (countOfSymbols[i] > 1) {
            repeatingSymbols[index] = i;
            index++;
        }
    }

    return repeatingSymbols;
}

int main() {
    char str[MaxSize];

    cout << "Enter symbols: ";
    cin.getline(str, MaxSize);

    char* result = checkStr(str);
    if (result) {
        cout << "Repeating symbols: ";
        for (int i = 0; i < strLen(result); i++) {
            cout << result[i] << " ";
        }
        cout << endl;
    } else {
        cout << "No repeating symbols found." << endl;
    }

    return 0;
}
