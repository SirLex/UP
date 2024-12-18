#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;
    int* arr = new int[n];
    delete[] arr;
}