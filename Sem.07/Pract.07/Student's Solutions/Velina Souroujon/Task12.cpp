#include <iostream>
using namespace std;

const int MAX_LENGTH = 1024;

char toLower(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
    {
        return ch + ('a' - 'A');
    }

    return ch;
}

int indexOf(const char* substr, const char* str, int startIdx = 0)
{
    if (substr == nullptr || str == nullptr)
    {
        return -1;
    }

    if (startIdx < 0 || startIdx >= MAX_LENGTH)
    {
        return -1;
    }

    int startIdxStr = startIdx;

    while (true)
    {
        bool found = true;

        for (size_t idxSubstr = 0; substr[idxSubstr] != '\0'; idxSubstr++)
        {
            char strChar = toLower(str[startIdxStr + idxSubstr]);
            char substrChar = toLower(substr[idxSubstr]);

            if (strChar == '\0')
            {
                return -1;
            }

            if (strChar != substrChar)
            {
                found = false;
                break;
            }
        }

        if (found)
        {
            return startIdxStr;
        }

        startIdxStr++;
    }
}

int len(const char* str)
{
    if (str == nullptr)
    {
        return -1;
    }

    int strLen = 0;

    while (*str != '\0')
    {
        strLen++;
        str++;
    }

    return strLen;
}

bool isLetter(char ch)
{
    return (ch >= 'A' && ch <= 'Z')
        || (ch >= 'a' && ch <= 'z');
}

bool isValidIdx(int idx)
{
    return idx >= 0 && idx < MAX_LENGTH;
}

bool isWord(const char* str, int startIdx, int endIdx)
{
    if ((!isValidIdx(startIdx)) || (!isValidIdx(endIdx)))
    {
        return false;
    }

    if (startIdx > endIdx)
    {
        return false;
    }

    if (isLetter(str[endIdx + 1]))
    {
        return false;
    }
    if (startIdx > 0 && isLetter(str[startIdx - 1]))
    {
        return false;
    }

    return true;
}

void censorWord(char* text, const char* word)
{
    if (text == nullptr || word == nullptr)
    {
        return;
    }

    const char REPLACING_SYMBOL = '*';

    int lenWord = len(word);
    int startIdx = -1;

    while ((startIdx = indexOf(word, text, startIdx + 1)) != -1)
    {
        int endIdx = startIdx + lenWord - 1;

        if (!isWord(text, startIdx, endIdx))
        {
            continue;
        }

        for (size_t i = 0; i < lenWord; i++)
        {
            text[startIdx + i] = REPLACING_SYMBOL;
        }
    }
}

int main()
{
    char text[MAX_LENGTH];
    char word[MAX_LENGTH];

    cin.getline(text, MAX_LENGTH);
    cin.getline(word, MAX_LENGTH);

    censorWord(text, word);
    cout << text;

    return 0;
}
