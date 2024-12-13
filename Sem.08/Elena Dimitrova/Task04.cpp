#include <iostream>
using namespace std;

const int MAXSIZE = 1024;
// HH:MM:SS
//
//
// bool checkHourFormat(char * str) {
//     char firstH = *str;
//     str++;
//     char secondH = *str;
//
//     int hours = (firstH - '0') * 10 + (secondH - '0');
//     if (hours < 0 || hours > 23) {
//         return false;
//     }
//     return true;
//
//
// }

int getLen(char* str) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

int CheckTimeStr(char str[]) {
    if (str == nullptr) {
        return -1;
    }
    if (getLen(str) > 8) {
        return -1;
    }
    if (str[2] != ':' || str[4] != ':') {
        return -1;
    }

    int hours = (str[0] - '0') * 10 + (str[1] - '0');
    int minutes = (str[3] - '0') * 10 + (str[4] - '0');
    int seconds = (str[6] - '0') * 10 + (str[7] - '0');

    if (0 > hours & hours > 24 || 0 > minutes & minutes > 60 || 0 > seconds & seconds > 60) {
        return -1;
    }
    return 1;
}

int main() {
    char str[MAXSIZE];
    cin.getline(str, MAXSIZE);
    cout << CheckTimeStr(str) << endl;



    return 0;
}