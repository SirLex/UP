#include <iostream>

using namespace std;

int main()
{
    float radius;
    cout << "Enter the radius: ";
    cin >> radius;

    float length, area, PI = 3.14159265;

    length = 2 * radius * PI;
    area = pow(radius, 2) * PI;

    cout << "The length is " << length << " metric units." << endl << "The area is " << area << " square metric units." << endl;
}
