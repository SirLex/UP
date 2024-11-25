// zad16.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int calculate(int a, int b, char action = ' ') {
	int result;

	switch (action)
	{
	case '+':
		result = a + b;
		break;
	case '-':
		result = a - b;
		break;
	case '*':
		result = a * b;
		break;
	case '/':
		result = a / b;
		break;
	case '%':
		result = a % b;
		break;
	default:
		result = a + b;
		break;
	}

	return result;
}

bool isValidOperator(char op) {
	switch (op)
	{
	case '+':
	case '-':
	case '*':
	case '/':
	case '%':
		return true;
	}

	return false;

}

bool isdividingByZero(char op, int b) {
	return op == '/' && b == 0;
}

int main()
{
	int a, b;
	char op;
	cout << "Enter expression ";
	cin >> a >> op >> b;

	while (!isValidOperator(op) || isdividingByZero(op, b)) {
		cout << "Error! Enter valid expression ";
		cin >> a >> op >> b;
	}

	cout << calculate(a, b, op);
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
