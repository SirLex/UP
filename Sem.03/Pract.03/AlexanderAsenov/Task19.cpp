// zad19.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int max = n * n;
	int maxCountDigits = 0;
	do {
		max /= 10 ;
		maxCountDigits++;
	} while (max > 0);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			
			int neededNum = n * j + 1;
			if (j % 2 == 1) {
				neededNum += n - i - 1;
			}
			else {
				neededNum += i;
			}



			cout << neededNum;

			int countDigits = 0;
			do {
				neededNum /= 10;
				countDigits++;
			} while (neededNum > 0);

			for (int k = 0; k < maxCountDigits - countDigits + 1; k++)
			{
				cout << " ";
			}

		}

		cout << endl;
	}
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
