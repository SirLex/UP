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

int indexOf(const char* text, const char* word, int startIdx = 0)
{
    if (text == nullptr || word == nullptr)
    {
        return -1;
    }

    if (startIdx < 0 || startIdx >= MAX_LENGTH)
    {
        return -1;
    }

    int startIdxWord = startIdx;

    while (true)
    {
        bool textFound = true;

        for (size_t idxText = 0; text[idxText] != '\0'; idxText++)
        {
            char wChar = toLower(word[startIdxWord + idxText]);
            char tChar = toLower(text[idxText]);

            if (wChar == '\0')
            {
                return -1;
            }

            if (wChar != tChar)
            {
                textFound = false;
                break;
            }
        }

        if (textFound)
        {
            return startIdxWord;
        }

        startIdxWord++;
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

void censorWord(char* text, const char* substring)
{
    if (text == nullptr || substring == nullptr)
    {
        return;
    }

    const char REPLACING_SYMBOL = '*';

    int idx = indexOf(substring, text);
    int lenSubstr = len(substring);

    while (idx != -1)
    {
        for (size_t i = 0; i < lenSubstr; i++)
        {
            text[idx + i] = REPLACING_SYMBOL;
        }

        idx = indexOf(substring, text, idx + 1);
    }
}

int main()
{
    char text[MAX_LENGTH];
    char substring[MAX_LENGTH];

    cin.getline(text, MAX_LENGTH);
    cin.getline(substring, MAX_LENGTH);

    censorWord(text, substring);
    cout << text;

    return 0;
}
