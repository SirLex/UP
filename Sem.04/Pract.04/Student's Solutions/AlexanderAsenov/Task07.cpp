// zad7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

const int DIFFERENCEBETWEENLETTERS = 'a' - 'A';

bool checkIsUpper(char s) {
	return 'A' <= s && s <= 'Z';
}

bool checkIsLower(char s){
	return 'a' <= s && s <= 'z';
}

char to_lower(char symbol) {
	if (checkIsUpper(symbol)) {
		return (char)(symbol + DIFFERENCEBETWEENLETTERS);
	}

	return symbol;
}

char to_Upper(char symbol) {
	if (checkIsLower(symbol)) {
		return (char)(symbol - DIFFERENCEBETWEENLETTERS);
	}

	return symbol;
}

int main()
{
	char s1, s2;
	cin >> s1 >> s2;
	cout << to_lower(s1) << " " << to_Upper(s2) << endl;
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
