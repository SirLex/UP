#include <iostream>

using namespace std;

char* Censor(char str[], int n)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] > '0' && str[i] < '9')
        {
            str[i] = '*';
        }
    }
}

int main()
{
    int n = 17;
    char str[] = "Az sym Gosho0022";
    char* str1 = new char[n];
    str1 = Censor(str, n);
    delete[] str1;
}