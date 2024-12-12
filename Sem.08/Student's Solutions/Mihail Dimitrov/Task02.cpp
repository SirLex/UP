#include <iostream>
using namespace std;

const int MAX_SIZE = 1024;

int CheckStr(char arr[])
{

    const int ASCII_TABLE_SIZE = 128;
    const int MINIMUM_SYMBOLS_REQUIRED = 2;

    if (arr == nullptr)
    {
        return -1;
    }

    int symbolCounterArray[ASCII_TABLE_SIZE] = {0};

    int counter = 0;
    while (*arr != '\0')
    {

        symbolCounterArray[*arr]++;
        counter++;
        arr++;
    }

    if (counter < MINIMUM_SYMBOLS_REQUIRED)
    {
        return -1;
    }

    int oddSymbols = 0;

    for (size_t i = 0; i < ASCII_TABLE_SIZE; i++)
    {
        if (symbolCounterArray[i] % 2 == 1)
        {
            oddSymbols++;
        }
    }

    return oddSymbols < MINIMUM_SYMBOLS_REQUIRED;
}

int main()
{
    char arr[MAX_SIZE] = "dasdasf";
    cout << CheckStr(arr);
}
