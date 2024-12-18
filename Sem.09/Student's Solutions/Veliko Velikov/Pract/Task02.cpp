#include <iostream>

using namespace std;

int CountString(char* str)
{
    int count = 0;
    while (str[count] != '\0')
    {
        count++;
    }
    return count;
}

char** SplitCapitalAndSmall(char* str)
{
    int count = CountString(str) + 1;
    char* ptrArr[2] = {};
    char* strSmall = new char[count];
    char* strCapital = new char[count];
    int i = 0;
    int iSmall = 0;
    int iCapital = 0;
    while(str[i] != '\0')
    {
        if (str[i] > 'a' && str[i] < 'z')
        {
            strSmall[iSmall] = str[i];
            iSmall++;
        }
        if (str[i] > 'A' && str[i] < 'Z')
        {
            strCapital[iCapital] = str[i];
            iCapital++;
        }
    }
    ptrArr[0] = strSmall;
    ptrArr[1] = strCapital;
    return ptrArr;
}

void PrintString(char* str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        cout << str[i] << " ";
        i++;
    }
    cout << endl;
}

int main()
{
    char str[] = {"NaMa Me ve JOro"};
    char** ptrArr = SplitCapitalAndSmall(str);
    char* strSmall = ptrArr[0];
    char* strCapital = ptrArr[1];

    PrintString(strSmall);
    PrintString(strCapital);

    delete[] strSmall;
    delete[] strCapital;
}