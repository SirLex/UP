// E12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
//12
int leastCommonMultiple(int a, int b, int c) {

	// Намираме НОД1 на две числа
	int a1 = a;
	int b1 = b;

	if (b > a)
	{
		int temp = a;
		a = b;
		b = temp;
	}
	while (b != 0)
	{
		int oldB = b;
		b = a % b;
		a = oldB;
	}

	//Намираме НОК1 на две числа
	int NOK1 = (a1 * b1) / a;
	a = NOK1;

	//Намираме НОД2 на НОК1 и променливата C
	int a2 = a;
	int c1 = c;

	if (c > a)
	{
		int temp = a;
		a = c;
		c = temp;
	}
	while (c != 0) {
		int oldC = c;
		c = a % c;
		a = oldC;
	}

	//Намираме НОК2
	int NOK2 = (a2 * c1) / a;
	return NOK2;
}


int main()
{
    std::cout << "Hello World!\n";
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
