#include <iostream>
using namespace std;

const int MAX_SIZE = 1024;

int countSymbols(char arr[], char symbol)
{
    if (arr == nullptr)
    {
        return -1;
    }
    int counter = 0;
    while (*arr != '\0')
    {
        if (*arr == symbol)
        {
            counter++;
        }
        arr++;
    }
    return counter;
}

bool contains(char arr[], char symbol)
{
    if (arr == nullptr)
    {
        return false;
    }
    while (*arr != '\0')
    {
        if (*arr == symbol)
        {
            return true;
        }
        arr++;
    }
    return false;
}

void CheckStr(char arr[], char result[])
{
    if (arr == nullptr)
    {
        return;
    }
    int i = 0;
    while (*arr != '\0')
    {
        if (contains(result, *arr))
        {
            arr++;
            continue;
        }
        if (countSymbols(arr, *arr) > 1)
        {
            result[i] = *arr;
            i++;
        }
        arr++;
    }
    result[i] = '\0';
}

int main()
{
    char arr[MAX_SIZE] = "aabb";
    char result[MAX_SIZE] = {};
    CheckStr(arr, result);
    cout << result;
}
