
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	char symbol; cin >> symbol;
	if ((symbol >= 'A' && symbol <= 'Z') || (symbol >= 'a' && symbol <= 'z') && (symbol == 'A' || symbol == 'a' || symbol == 'o' || symbol == 'O' || symbol == 'U' || symbol == 'u' || symbol =='E' || symbol == 'e' || symbol == 'I' || symbol == 'i'))
	{
		cout << "The symbol is a letter and is a vowel";
	}

	int a, b; cin >> a >> b;
	cout << (a >= b ? a : b);

	int grade;
	cout << "Result: "; cin >> grade;

	if (grade < 40)
	{
		cout << "2";
	}
	else if(grade <60) {
		cout << "3";
	}
	else if (grade < 70) {
		cout << "4";
	}
	else if (grade < 80) {
		cout << "5";
	}
	else if (grade < 90) {
		cout << "6";
	}
	else {
		cout << "6+";
	}

	int a, b, c; cin >> a >> b >> c;
	if (a + b > c && a + c > b && b + c > a)
	{
		cout << "Valid traingle";
	}
	else {
		cout << "Invalid traingle";

	}

	int a, b, c; cin >> a >> b >> c;
	double root1 = ((-b + sqrt((b * b) - 4 * a * c)) / 2 * a);
	double root2 = ((-b - sqrt((b * b) - 4 * a * c)) / 2 * a);
	cout << root1 << " " << root2;


	char symbol;
	cout << "Enter a symbol" << endl;
	cin >> symbol;

	if ((symbol >= 'A' && symbol <= 'Z') || (symbol >= 'a' && symbol <= 'z'))
	{
		if (symbol >= 'A' && symbol <= 'Z')
		{
			char symbolToLower = symbol + 32;
			cout << symbolToLower << endl;
		}
		else if (symbol >= 'a' && symbol <= 'z') {
			char symbolToUpper = symbol - 32;
			cout << symbolToUpper << endl;
		}
	}
	else {
		cout << "Invalid character" << endl;
	}

	int num;
	cout << "Arabic numeral: ";
	cin >> num;

	switch (num) {
	case 1: cout << "I" << endl;break;
	case 2: cout << "II" << endl;break;
	case 3: cout << "III" << endl;break;
	case 4: cout << "IV" << endl;break;
	case 5: cout << "V" << endl;break;
	case 6: cout << "VI" << endl;break;
	case 7: cout << "VII" << endl;break;
	case 8: cout << "VIII" << endl;break;
	case 9: cout << "IX" << endl;break;
	default: cout << "Invalid num \n";
	}

	int n1, n2, n3; cin >> n1 >> n2 >> n3;
	if (n1 >= n2)
	{
		if (n2 >= n3)
		{
			cout << n1 << " " << n2 << " " << n3;
		}
		else if (n3 >= n1)
		{
			cout << n3 << " " << n1 << " " << n2;
		}
		else {
			cout << n1 << " " << n3 << " " << n2;
		}
	}
	else {
		if (n2 >= n3)
		{
			if (n3 >= n1)
			{
				cout << n2 << " " << n3 << " " << n1;
			}
			else {
				cout << n2 << " " << n1 << " " << n3;
			}
		}
		else {
			cout << n3 << n2 << n1;
		}
	}


	int a, b; cin >> a >> b;
	char opr; cin >> opr;

	if (opr == '+')
	{
		cout << a + b;
	}
	else if (opr == '-') {
		cout << a - b;
	}
	else if (opr == '*') {
		cout << a * b;
	}
	else if (opr == '/') {
		if (b != 0)
		{
			cout << a / b;
		}
		else {
			cout << "Invalid operation";
		}
	}


	int a, b, c; cin >> a >> b >> c;
	int biggest,smallest;
	if (a >= b && a >= c)
	{
		biggest = a;
	}
	else if (b >= a && b >= c) {
		biggest = b;
	}
	else {
		biggest = c;
	}

	

	if (a < b && a < c)
	{
		smallest = a;
	}
	else if (b < a && b < c) {
		smallest = b;
	}
	else {
		smallest = c;
	}

	int middle;

	if (a!= biggest &&  a!= smallest)
	{
		middle = a;
	}
	else if (b != biggest && b != smallest) {
		middle = b;
	}
	else {
		middle = c;
	}

	cout << biggest << middle<< smallest;

	int day, month; cin >> day >> month;
	switch (month) {
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12: if (day < 31) day++; else if(day == 31) { day = 1; month++; }
		   else { cout << "Invvalid day"; } break;
	case 2:if (day < 28) day++; else if(day == 28){ day = 1; month++; }
		  else { cout << "Invvalid day"; }break;
	case 4:
	case 6:
	case 9:
	case 11: if (day < 30) day++; else if (day == 30) { day = 1; month++; }
		   else { cout << "Invvalid day"; }break;
	default: cout << "Invvalid day"; break;
	}

	cout << day << "." << month;

	int num; cin >> num;
	int num1, num2;
	num1 = (num / 1000) * 10 + num%10;
	num /= 10;
	num2 = (num % 100);

	if (num1 <num2)
	{
		cout << "less (" << num1 << "<" << num2 << ")\n";
	}
	else if (num1 > num2) {
		cout << "greater (" << num1 << ">" << num2 << ")\n";
	}
	else {
		cout << "equal (" << num1 << "=" << num2 << ")\n";
	}
}


