#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;
    if (n <= 3)
    {
        return 0;
    }
    int prev = 1;
    int temp = 1;
    cout << 1 << " ";
    for (int i = 1; i <= n; i += prev)
    {
        prev = temp;
        cout << i << " ";
        temp = i;
    }
}