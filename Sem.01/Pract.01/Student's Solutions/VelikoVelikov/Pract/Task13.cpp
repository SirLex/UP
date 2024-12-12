#include <iostream>

using namespace std;

int main()
{
    float x1, x2, y1, y2;

    cout << "The coordinates of A(x1,y1) are" << endl
        << "x1 = ";
    cin >> x1;
    cout << "y1 = ";
    cin >> y1;

    cout << "The coordinates of B(x2,y2) are" << endl
        << "x2 = ";
    cin >> x2;
    cout << "y2 = ";
    cin >> y2;

    float distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    cout << "The distance between points A and B is " << distance;
}