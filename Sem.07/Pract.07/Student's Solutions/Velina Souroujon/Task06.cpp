#include <iostream>
using namespace std;

const size_t MAX_LENGTH = 1024;

void getLongestPrefix(const char* firstStr, const char* secondStr, const char* thirdStr, char* longestPrefix)
{
    if (firstStr == nullptr || secondStr == nullptr || thirdStr == nullptr || longestPrefix == nullptr)
    {
        return;
    }

    int prefixIdx = 0;

    while ((*firstStr != '\0')
        && (*firstStr == *secondStr)
        && (*firstStr == *thirdStr))
    {
        longestPrefix[prefixIdx] = *firstStr;
        prefixIdx++;

        firstStr++;
        secondStr++;
        thirdStr++;
    }

    longestPrefix[prefixIdx] = '\0';
}

int main()
{
    char firstStr[MAX_LENGTH];
    char secondStr[MAX_LENGTH];
    char thirdStr[MAX_LENGTH];
    char longestPrefix[MAX_LENGTH];

    cin.getline(firstStr, MAX_LENGTH);
    cin.getline(secondStr, MAX_LENGTH);
    cin.getline(thirdStr, MAX_LENGTH);

    getLongestPrefix(firstStr, secondStr, thirdStr, longestPrefix);
    cout << longestPrefix;

    return 0;
}
