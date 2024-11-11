// zad3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

double getDistanceBetweenPoints(int x1, int y1, int x2, int y2) {
    return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}

double getPerimeterOfTriangle(int x1, int y1, int x2, int y2, int x3, int y3) {
    double a = getDistanceBetweenPoints(x1, y1, x2, y2);
    double b = getDistanceBetweenPoints(x1, y1, x3, y3);
    double c = getDistanceBetweenPoints(x2, y2, x3, y3);

    return a + b + c;
}


int main()
{
    int x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    cout << getPerimeterOfTriangle(x1, y1, x2, y2, x3, y3);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
