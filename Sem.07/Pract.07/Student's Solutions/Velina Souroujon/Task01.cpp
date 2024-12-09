#include <iostream>
using namespace std;

const int MAX_LENGTH = 1024;

bool isLowerCase(char ch)
{
    return ch >= 'a' && ch <= 'z';
}

void takeLowerCaseLetters(const char* str, char* result)
{
    if (str == nullptr || result == nullptr)
    {
        return;
    }

    while (*str != '\0')
    {
        if (isLowerCase(*str))
        {
            *result = *str;
            result++;
        }

        str++;
    }

    *result = '\0';
}

int main()
{
    char str[MAX_LENGTH];
    char result[MAX_LENGTH];

    cin.getline(str, MAX_LENGTH);
    takeLowerCaseLetters(str, result);

    cout << result;

    return 0;
}
