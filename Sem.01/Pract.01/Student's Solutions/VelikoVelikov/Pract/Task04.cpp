#include <iostream>

using namespace std;

int main()
{
    float length, width;

    cout << "Enter the length of the rectangle: ";
    cin >> length;

    cout << "Enter the width of the rectangle: ";
    cin >> width;

    cout << "The area of the rectangle is " << length * width << " square units." << endl;
    cout << "The perimeter of the rectangle is " << 2 * (length + width) << " units." << endl;
}
