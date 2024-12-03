#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    double discriminant = b * b - 1 * 4 * a * c;

    int x1, x2;

    if (discriminant >= 0)
    {
        x1 = (-1 * b + sqrt(discriminant)) / (2 * a);
        x2 = (-1 * b - sqrt(discriminant)) / (2 * a);
        if (discriminant == 0)
        {
            cout << "The root of this problem is:" << endl
                << "x = " << x1;
        }
        else
        {
            cout << "The roots of this problem are: " << endl
                << "x1 = " << x1 << endl
                << "x2 = " << x2 << endl;
        }
    }
    else
    {
        cout << "There are no real roots!";
    }
}