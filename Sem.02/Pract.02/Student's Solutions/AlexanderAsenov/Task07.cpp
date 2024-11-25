// zad7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	char letter;

	cout << "Enter a letter ";
	cin >> letter;

	if ('a' <= letter && letter <= 'z') {
		cout << (char)(letter + ('A' - 'a')) << endl;
	}
	else if ('A' <= letter && letter <= 'Z') {
		cout << (char)(letter + ('a' - 'A')) << endl;
	}
	else {
		cout << "Invalid character" << endl;
	}
}