#include <iostream>
using namespace std;

const size_t MAX_LENGTH = 1024;

void modifyString(char* str, char x, char a, char b)
{
    if (str == nullptr)
    {
        return;
    }

    int counter = 0;

    while (*str != '\0')
    {
        if (*str == x)
        {
            counter++;

            if (counter % 2 == 1)
            {
                *str = a;
            }
            else
            {
                *str = b;
            }
        }

        str++;
    }
}

int main()
{
    char str[MAX_LENGTH];
    cin.getline(str, MAX_LENGTH);

    char x, a, b;
    cin >> x >> a >> b;

    modifyString(str, x, a, b);
    cout << str;

    return 0;
}
