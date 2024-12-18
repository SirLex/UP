#include <iostream>
using namespace std;

const size_t MAX_LENGTH = 1024;

int occurencesCount(const char* str, char symbol)
{
    if (str == nullptr)
    {
        return - 1;
    }

    int symbolCount = 0;

    while (*str != '\0')
    {
        if (*str == symbol)
        {
            symbolCount++;
        }

        str++;
    }

    return symbolCount;
}

int main()
{
    char str[MAX_LENGTH];
    cin.getline(str, MAX_LENGTH);

    char ch;
    cin >> ch;

    cout << occurencesCount(str, ch);

    return 0;
}
