#include <iostream>
using namespace std;

const int MAX_LENGTH = 1024;

int indexOf(const char* text, const char* word, int startIdx)
{
    if (text == nullptr || word == nullptr)
    {
        return -1;
    }

    if(startIdx < 0 || startIdx >= MAX_LENGTH)
    {
        return -1;
    }

    int startIdxWord = startIdx;

    while (true)
    {
        bool textFound = true;

        for (size_t idxText = 0; text[idxText] != '\0'; idxText++)
        {
            char wChar = word[startIdxWord + idxText];
            char tChar = text[idxText];

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

int occurrencesCount(const char* str, const char* substr)
{
    int count = 0;

    int idx = indexOf(substr, str, 0);

    while (idx != -1)
    {
        count++;
        idx = indexOf(substr, str, idx + 1);
    }

    return count;
}

int main()
{
    char word[MAX_LENGTH];
    char strToLookUp[MAX_LENGTH];

    cin.getline(word, MAX_LENGTH);
    cin.getline(strToLookUp, MAX_LENGTH);

    cout << occurrencesCount(word, strToLookUp);

    return 0;
}
