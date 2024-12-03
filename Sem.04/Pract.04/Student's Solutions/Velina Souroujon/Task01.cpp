#include <iostream>
using namespace std;

int sum(int a, int b)
{
    return a + b;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << "The sum is: " << sum(a, b);

    return 0;
}