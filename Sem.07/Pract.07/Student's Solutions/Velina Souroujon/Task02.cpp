#include <iostream>
using namespace std;

const int MAX_LENGTH = 1024;

int len(const char* str)
{
    int strLength = 0;

    while (*str != '\0')
    {
        strLength++;
        str++;
    }

    return strLength;
}

void substring(const char* str, int beg, int end, char* result)
{
    if (str == nullptr || result == nullptr)
    {
        return;
    }

    int resultIdx = 0;

    if (beg >= len(str) || beg > end)
    {
        result[resultIdx] = '\0';
        return;
    }

    for (size_t idx = beg; idx <= end; idx++)
    {
        if (str[idx] == '\0') 
        {
            break;
        }

        result[resultIdx] = str[idx];
        resultIdx++;
    }

    result[resultIdx] = '\0';
}

int main()
{
    char str[MAX_LENGTH];
    char substr[MAX_LENGTH];
    int beg, end;

    cin.getline(str, MAX_LENGTH);
    cin >> beg >> end;

    substring(str, beg, end, substr);
    cout << substr;

    return 0;
}
