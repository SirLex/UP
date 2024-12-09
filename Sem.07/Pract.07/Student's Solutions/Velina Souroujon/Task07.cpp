#include <iostream>
using namespace std;

const size_t MAX_LENGTH = 1024;

int compare(const char* firstStr, const char* secondStr)
{
    if (firstStr == nullptr || secondStr == nullptr)
    {
        cout << "Error!";
        return -2;
    }

    int result = 0;

    do
    {
        if (*firstStr < *secondStr)
        {
            result = -1;
        }
        else if (*firstStr > *secondStr)
        {
            result = 1;
        }

        firstStr++;
        secondStr++;
    }
    while ((*firstStr != '\0') 
        && result == 0);

    return result;
}

int main()
{
    char firstStr[MAX_LENGTH];
    char secondStr[MAX_LENGTH];

    cin.getline(firstStr, MAX_LENGTH);
    cin.getline(secondStr, MAX_LENGTH);

    cout << compare(firstStr, secondStr);

    return 0;
}
