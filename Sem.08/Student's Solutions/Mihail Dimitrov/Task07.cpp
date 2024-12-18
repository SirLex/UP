#include <iostream>
using namespace std;

const int MAX_SIZE = 1024;

bool isWordContained(char *symbols, char *word, int symbolsLen)
{
    if (symbols == nullptr || word == nullptr)
    {
        return false;
    }

    int counter = 0;

    while (*word != '\0')
    {
        counter++;
        if (counter > symbolsLen)
        {
            return false;
        }
        if (*word != *symbols)
        {
            return false;
        }
        word++;
        symbols--;
    }

    return true;
}

bool doExist(char *symbols, char *word)
{
    if (symbols == nullptr || word == nullptr)
    {
        return false;
    }

    int counter = 0;
    while (*symbols != '\0')
    {
        counter++;
        symbols++;
    }
    symbols--;
    while (counter > 0)
    {
        if (isWordContained(symbols, word, counter))
        {
            return true;
        }
        symbols--;
        counter--;
    }
    return false;
}

int main()
{
    char symbols[MAX_SIZE] = "1test1";
    char word[MAX_SIZE] = "tset";
    cout << doExist(symbols, word);
}
