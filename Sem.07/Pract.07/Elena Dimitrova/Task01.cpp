#include <iostream>
using namespace std;

const int MAXSIZE = 1024;

void isolateSmallestLetters(const char* str, char* buff) {
    if (str == nullptr || buff == nullptr) {
        cout << "Error!";
        return;
    }
    int ind = 0;
    while (*str != '\0') {
        if (*str >= 'a' && *str <= 'z') {
            buff[ind] = *str;
            ind++;
        }
        str++;
    }
    buff[ind] = '\0';
}

int main() {
    char buff[MAXSIZE];
    char str[MAXSIZE];
    cout << "Enter a string: ";
    cin.getline(str, MAXSIZE);
    isolateSmallestLetters(str, buff);
    cout << buff << endl;
    return 0;
}
