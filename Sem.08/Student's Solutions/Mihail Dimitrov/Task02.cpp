#include <iostream>
using namespace std;

const int MAX_SIZE = 1024;

int CheckStr(char arr[])
{

    const int ASCII_TABLE_SIZE = 255;
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
        if (symbolCounterArray[i] != 0)
        {
            cout << symbolCounterArray[i] << " " << (char)i << endl;
        }
        if (symbolCounterArray[i] % 2 == 1)
        {
            oddSymbols++;
        }
    }

    if (oddSymbols == 0 && counter % 2 == 0)
    {
        return 1;
    }
    else if (oddSymbols == 1 && counter % 2 == 1)
    {
        return 1;
    }
    return 0;
}

int main()
{
    char arr[MAX_SIZE] = "dasdasf";
    cout << CheckStr(arr);
}
