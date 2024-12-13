#include <iostream>
using namespace std;

const int MAXSIZE = 1024;

int countLetter(char* str, char a) {
    if (str == nullptr) {
        cout << "Error!" << endl;
        return -1;
    }
    int counter = 0;
    while (*str != '\0') {
        if (*str == a) {
            counter++;
        }
        str++;
    }
    return counter;
}

int main() {
    char str[MAXSIZE];
    char a;
    cout << "Enter a string: ";
    cin.getline(str, MAXSIZE);
    cout << "Enter the letter you want to count: ";
    cin >> a;

    cout << countLetter(str, a) << endl;

    return 0;
}