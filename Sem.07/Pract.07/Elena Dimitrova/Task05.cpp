#include <iostream>
using namespace std;

const int MAXSIZE = 1024;

void longestPrefixInStrings(char* str1, char* str2, char* str3, char* buff) {
    if (str1 == nullptr || str2 == nullptr || str3 == nullptr || buff == nullptr) {
        cout << "Error!" << endl;
        return;
    }

    while (*str1 != '\0' || *str2 != '\0' || *str3 != '\0') {
        if (*str1 == *str2 && *str1 == *str3 && *str2 == *str3) {
            *buff = *str1;
            buff++;
            str1++;
            str2++;
            str3++;
        }else {
            break;
        }
    }
    *buff = '\0';
}

int main() {
    char str1[MAXSIZE], str2[MAXSIZE], str3[MAXSIZE];
    cout << "Enter the strings: ";
    cin.getline(str1, MAXSIZE);
    cin.getline(str2, MAXSIZE);
    cin.getline(str3, MAXSIZE);

    char buff[MAXSIZE];
    longestPrefixInStrings(str1, str2, str3, buff);
    cout << buff << endl;

    return 0;
}