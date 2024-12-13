#include <iostream>
using namespace std;

const int MAXSIZE = 1024;

void comparesLexicographically(char* str1, char* str2, int& result) {
    if (str1 == nullptr || str2 == nullptr) {
        cout << "Error!" << endl;
        return;
    }
    while (true) {
        if (*str1 == *str2) {
            if (*str1 == '\0' && *str2 == '\0') {
                return;
            }
            str1++;
            str2++;
        } else if (*str1 < *str2) {
            result = -1;
            return;
        }else {
            result = 1;
            return;
        }
    }
}

int main() {
    char str1[MAXSIZE];
    char str2[MAXSIZE];
    cout << "Enter the strings:" << endl;
    cin.getline(str1, MAXSIZE);
    cin.getline(str2, MAXSIZE);

    int result = 0;
    comparesLexicographically(str1, str2, result);
    cout << result << endl;

    return 0;
}