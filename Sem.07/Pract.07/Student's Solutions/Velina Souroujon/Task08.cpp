#include <iostream>
using namespace std;

const size_t MAX_LENGTH = 1024;

bool isLowerCase(char ch)
{
    return ch >= 'a'
        && ch <= 'z';
}

void removeDuplicates(const char* str, char* result)
{
    if (str == nullptr || result == nullptr)
    {
        return;
    }

    int resultIdx = 0;

    const size_t LETTERS_COUNT = 26;
    bool lettersMap[LETTERS_COUNT] = {};

    while (*str != '\0')
    {
        if (!isLowerCase(*str))
        {
            cout << "The string must contain lowercase letters only!" << endl;
            break;
        }

        int mapIdx = *str - 'a';

        if (!lettersMap[mapIdx])
        {
            lettersMap[mapIdx] = true;

            result[resultIdx] = *str;
            resultIdx++;
        }

        str++;
    }

    result[resultIdx] = '\0';
}

int main()
{
    char str[MAX_LENGTH];
    char result[MAX_LENGTH];

    cin.getline(str, MAX_LENGTH);
    removeDuplicates(str, result);

    cout << result;

    return 0;
}
