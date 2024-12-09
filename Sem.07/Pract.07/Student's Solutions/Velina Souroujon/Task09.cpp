#include <iostream>
using namespace std;

const int MAX_LENGTH = 1024;

int indexOf(const char* text, const char* word)
{
    if (text == nullptr || word == nullptr)
    {
        return -1;
    }

    int startIdxWord = 0;

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

int main()
{
    char word[MAX_LENGTH];
    char text[MAX_LENGTH];

    cin.getline(word, MAX_LENGTH);
    cin.getline(text, MAX_LENGTH);

    cout << indexOf(text, word);

    return 0;
}
