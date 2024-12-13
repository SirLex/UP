#include <iostream>
using namespace std;

const int MAXSIZE = 1024;

void deleteRepeatingLetters(char* str, char* buff) {
    if (str == nullptr || buff == nullptr) {
        cout << "Error!";
        return;
    }

    int counter = 0;
    int lenOfBuff = 1;
    *buff = *str;
    for (int i = 0; str[i] != '\0'; i++) {
        for (int j = 0; buff[j] != '\0'; j++) {
            if (str[i] == buff[j]) {
                counter++;
            }
        }
        if (counter == 0) {
            buff[lenOfBuff] = str[i];
            lenOfBuff++;

        }
        counter = 0;
    }
    buff[lenOfBuff] = '\0';
}

int main() {
    char buff[MAXSIZE];
    char str[MAXSIZE];
    cout << "Enter a string: ";
    cin.getline(str, MAXSIZE);
    deleteRepeatingLetters(str, buff);
    cout << buff << endl;
    return 0;
}
