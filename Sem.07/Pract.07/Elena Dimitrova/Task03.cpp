#include <iostream>
using namespace std;

const int MAXSIZE = 1024;

void changeLettersInString(char* str, char* buff, char x, char a, char b) {
    if (str == nullptr || buff == nullptr) {
        cout << "Error!" << endl;
        return;
    }
    int counter = 1;
    while (*str != '\0') {
        if (*str == x) {
            if (counter % 2) {
                *buff = a;
            } else {
                *buff = b;
            }
            counter++;
        } else {
            *buff = *str;
        }
        str++;
        buff++;
    }
    *buff = '\0';
}

int main() {
    char str[MAXSIZE];
    char buff[MAXSIZE];
    char x, a, b;
    cout << "Enter a string: ";
    cin.getline(str, MAXSIZE);
    cout << "Enter what is being changed and with what: ";
    cin >> x >> a >> b;

    changeLettersInString(str, buff, x, a, b);

    cout << buff << endl;

    return 0;
}