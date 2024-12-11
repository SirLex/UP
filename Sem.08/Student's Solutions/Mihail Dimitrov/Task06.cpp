#include <iostream>
using namespace std;

int NumCalc(long num, int k, int l) {
    if (k <= 0 || l <= 0)
    {
        return -1;
    }
    int sum = 0;
    int counter = 1;

    bool kIsValid = false;
    bool lIsValid = false;

    while (num != 0) {
        if (counter == k)
        {
            kIsValid = true;
            sum += num % 10;
        }
        if (counter == l)
        {
            lIsValid = true;
            sum += num % 10;
        }
        counter++;
        num /= 10;
    }

    if (!kIsValid || !lIsValid)
    {
        return -1;
    }

    return sum;
}

int main()
{
    long num;
    int k, l;
    cin >> num;
    cin >> k >> l;
    cout << NumCalc(num, k, l);
}
