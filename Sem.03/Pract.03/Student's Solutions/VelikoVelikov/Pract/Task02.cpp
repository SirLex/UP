﻿#include <iostream>

using namespace std;



int main()
{
    int n; cin >> n;

    for (int i = 1; i < n; i++)
    {
        cout << "x = " << i << " y = " << n - i << endl;
    }
}
