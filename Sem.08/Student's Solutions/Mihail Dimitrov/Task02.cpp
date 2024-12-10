#include <iostream>
using namespace std;

const int MAX_SIZE = 1024;

int countSymbols(char arr[], char symbol) {
    int counter = 0;
    while (*arr != '\0') {
        if (*arr == symbol)
        {
            counter++;
            *arr = ' ';
        }
        arr++;
    }
    return counter;
}

int CheckStr(char arr[]) {

    if (arr == nullptr)
    {
        return -1;   
    }
    int oddSymbols = 0;
    int counter = 0;
    while (*arr != '\0') {

        if (*arr == ' ')
        {
            arr++;
            counter++;
            continue;
        }

        if (countSymbols(arr, *arr) % 2 == 1)
        {
            oddSymbols++;
        }

        counter++;
        arr++;
    }

    if (counter < 2)
    {
        return -1;
    }
    if (oddSymbols == 0 && counter % 2 == 0)
    {
        return 1;
    }
    else if (oddSymbols == 1 && counter % 2 == 1) {
        return 1;
    }
    return 0;
}

int main()
{
    char arr[MAX_SIZE] = "asdfgjk";
    cout << CheckStr(arr);
}
