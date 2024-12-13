#include <iostream>
using namespace std;

const int MAXSIZE = 1024;

void isolatedPartOfString(char* str, char* buff, int beg, int end) {
    if (str == nullptr || buff == nullptr) {
        cout << "Error!" << endl;
        return;
    }

    int ind = 0;
    while (*str != '\0') {
        if (ind >= beg && ind <= end) {
            *buff = *str;
            buff++;
        }
        ind++;
        str++;
    }
    *buff = '\0';
}

int main() {
    char str[MAXSIZE];
    char buff[MAXSIZE];
    int beg, end;
    cout << "Enter a string: ";
    cin.getline(str, MAXSIZE);
    cout << "Enter beginning and end: ";
    cin >> beg >> end;

    isolatedPartOfString(str, buff, beg, end);

    cout << buff << endl;

    return 0;
}