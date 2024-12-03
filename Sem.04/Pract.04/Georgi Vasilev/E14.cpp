// E14.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
//14
bool isInRange(int a, int b, int num) {
	for (int i = a; i <= b; i++)
	{
		if (i == num)
		{
			return true;
		}
	}
	return false;
}
int askUser(int from, int to) {
	int n;
	while (true)
	{
		std::cin >> n;
		if (isInRange(from, to, n))
		{
			break;
		}
	}
	return n;
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
