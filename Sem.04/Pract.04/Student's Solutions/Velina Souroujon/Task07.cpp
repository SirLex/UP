#include <iostream>
using namespace std;

const char TO_LOWER = 'a' - 'A';
const char TO_UPPER = 'A' - 'a';

char toLower(char ch)
{
    return ch + TO_LOWER;
}

char toUpper(char ch)
{
    return ch + TO_UPPER;
}

int main()
{
    return 0;
}
