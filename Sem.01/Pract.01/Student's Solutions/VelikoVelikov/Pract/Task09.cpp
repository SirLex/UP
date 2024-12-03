#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter a: ";
    cin >> a;

    cout << "Enter b: ";
    cin >> b;

    cout << "Enter c: ";
    cin >> c;

    double D = pow(b, 2) - 4 * a * c;

    double x1 = (-1 * b + sqrt(D)) / (2 * a), x2 = (-1 * b - sqrt(D)) / (2 * a);

    if (D > 0)
    {
        cout << "x1 = " << x1 << endl << "x2 = " << x2;
    }
    else
    {
        if (D == 0)
        {
            cout << "x = " << x1;
        }
        else
        {
            cout << "There are no real solutions to this equaion!";
        }
    }
}