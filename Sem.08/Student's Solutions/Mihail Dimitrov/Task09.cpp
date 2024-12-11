#include <iostream>
using namespace std;

const int MAX_SIZE = 1024;

void GetWord(char str[], char result[]) {
    if (str == nullptr || result == nullptr)
    {
        return;
    }
    int maxStartIndex = 0;
    int maxEndIndex = 0;
    char* dummy = str;
    int counter = 0;
    int currentIndex = 0;
    while (*str != '\0') {
        if (*str == ' ')
        {
            if (counter > maxEndIndex - maxStartIndex)
            {
                maxEndIndex = currentIndex;
                maxStartIndex = currentIndex - counter;
            }
            counter = 0;
        }
        counter++;
        currentIndex++;
        str++;
    }
    if (counter > maxEndIndex - maxStartIndex)
    {
        maxEndIndex = currentIndex;
        maxStartIndex = currentIndex - counter;
    }

    while (maxStartIndex > 0) {
        dummy++;
        maxEndIndex--;
        maxStartIndex--;
    }

    while (maxEndIndex > 0) {
        *result = *dummy;
        result++;
        dummy++;
        maxEndIndex--;
    }
    *result = '\0';
}

int main()
{
    char str[MAX_SIZE] = "hello alex";
    char result[MAX_SIZE];
    
    GetWord(str, result);

    cout << result;
}
