// zad12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int num;
	cin >> num;
	int numberOfDigits = 0;

	int copyOfNum = num;
	do {
		numberOfDigits++;
		copyOfNum /= 10;
	} while (copyOfNum > 0);

	int answer;

	if (numberOfDigits % 2 == 0) {
		int newNum = 0;
		int removeIndex1 = numberOfDigits / 2 - 1;
		int removeIndex2 = numberOfDigits / 2;
		for (int i = 0, j = 0; i < numberOfDigits; i++)
		{
			if (i == removeIndex1 || i == removeIndex2) {
				num /= 10;
				continue;
			}

			newNum += num % 10 * pow(10, j);
			num /= 10;
			j++;
		}

		answer = newNum;
	}
	else {
		int newNum = 0;
		int removeIndex = numberOfDigits / 2;

		for (int i = 0, j = 0; i < numberOfDigits; i++)
		{
			if (i == removeIndex) {
				num /= 10;
				continue;
			}
			
			newNum += num % 10 * pow(10, j);

			num /= 10;
			j++;
		}

		answer = newNum;
	}

	cout << answer << ", " << answer+1;
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
