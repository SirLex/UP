
#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;


int main() {
	//1
	cout << "Oh what" << endl << "a happy day!" << endl << "Oh yes," << endl << "what a happy day!" << endl;
	//2
	int a = 5;
	int b = 4;
	int c = 7;
	int d = 9;

	cout << a + b + c + d << endl;
	cout << a * b * c * d << endl;

	//3
	double BGN;
	cin >> BGN;
	double EUR = BGN * 0.51;
	double USD = BGN * 0.56;

	cout << EUR << endl << USD << endl;

	//4
	double side1, side2;
	cout << "Please enter the length of the first side: ";
	cin >> side1;

	cout << "Please enter the length of the second side: ";
	cin >> side2;

	cout << "P: " << 2 * (side1 + side2) << endl;
	cout << "S: " << side1 * side2 << endl;


	//5
	int num1, num2;

	cin >> num1 >> num2;

	bool biggerNum = (num1 < num2) ? 1 : 0;
	cout << biggerNum << endl;

	//6
	int divident, divisor;
	cin >> divident >> divisor;

	cout << "The quotient of the division is : " << divident / divisor << endl;
	cout << "The remainder of the division is : " << divident % divisor << endl;

	//7
	int apples, pears, bananas;

	cout << "Apples: " << endl;
	cin >> apples;
	cout << "Pears: " << endl;
	cin >> pears;
	cout << "Bananas: " << endl;
	cin >> bananas;

	cout << "Pesho, don't forget to buy " << apples << " apples, " << pears << " pears and " << bananas << " bananas!" << endl;

	//8
	int r;
	cin >> r;
	double PI = 3.14159265;

	cout << "C: " << 2 * PI * r << endl;
	cout << "S: " << PI * r * r << endl;

	//9
	int quadraticA, quadraticB, quadraticC;
	cout << "a= ";
	cin >> quadraticA;

	cout << "b= ";
	cin >> quadraticB;

	cout << "c= ";
	cin >> quadraticC;

	double x1 = (-b + sqrt((quadraticB * quadraticB) - 4 * quadraticA * quadraticC)) / 2;
	double x2 = (-b - sqrt((quadraticB * quadraticB) - 4 * quadraticA * quadraticC)) / 2;

	cout << "x1 = " << x1 << endl;
	cout << "x2 = " << x2 << endl;

	//10
	int n1 = 3;
	int n2 = 5;

	int temp = n1;
	n1 = n2;
	n2 = temp;

	//11
	int num11, num22;
	cin >> num11 >> num22;

	int bigger = num11 >= num22 ? num11 : num22;
	int smaller = num11 >= num22 ? num22 : num11;

	//12
	int s;
	cout << "Seconds: " << endl;
	cin >> s;

	int days = s / (24 * 3600);
	s %= (24 * 3600);

	int hours = s / 3600;
	s %= 3600;

	int mins = s / 60;
	s %= 60;

	int secs = s;

	cout << days << " days, " << hours << " hours, " << mins << " minutes and " << secs << "seconds" << endl;

	//13
	double pointX, pointY, pointZ, pointN;
	cin >> pointX >> pointY >> pointZ >> pointN;

	double distance = sqrt(((pointZ - pointX) * (pointZ - pointX)) + ((pointN - pointY) * (pointN - pointY)));

	cout << fixed << setprecision(2) << distance << endl;

	//14
	long long cardNum;
	cin >> cardNum;

	long long lastFourDigits = cardNum % 10000;

	cout << "XXXXXXXXXXXX" << lastFourDigits << endl;
}