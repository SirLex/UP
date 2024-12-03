#include <iostream>

using namespace std;

int main()
{
    const double mathPi = 3.14;
    char figureSign;
    cout << "Tell me the figure's first letter! (s,r,c,t)" << endl;
    cin >> figureSign;

    switch (figureSign)
    {
    case 's': cout << "Tell me the length of the side of the square: ";
        int sSide;
        cin >> sSide;
        cout << "The area of the square is " << sSide * sSide << " square metric units.";
        break;

    case 'r': cout << "Tell me the length of the first side of the rectangle: ";
        int rSideA;
        cin >> rSideA;
        cout << "Tell me the length of the second side of the rectangle: ";
        int rSideB;
        cin >> rSideB;
        cout << "The area of the rectangle is " << rSideA * rSideB << " square metric units.";
        break;

    case 'c': cout << "Tell me the radius of the circle: ";
        int radius;
        cin >> radius;
        cout << "The area of the circle is " << radius * radius * mathPi << " square metric units.";
        break;

    case 't': cout << "Tell me the side of the triangle: ";
        int tSide;
        cin >> tSide;
        cout << "Tell me the height of the truangle: ";
        int tHeight;
        cin >> tHeight;
        cout << "The area of the triangle is " << tSide * tHeight / 2 << " square metric units.";
        break;

    default: cout << "Unknown figure's first letter!";
        break;
    }
}
