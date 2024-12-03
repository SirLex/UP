#include <iostream>

using namespace std;

int main()
{
    int r, x, y; cin >> r >> x >> y;

    double length = x * x + y * y;

    if (length > r * r)
        cout << "Out of circle";
    if (length == r * r)
        cout << "On the circle";
    if (length < r * r)
        cout << "In the circle";
}
