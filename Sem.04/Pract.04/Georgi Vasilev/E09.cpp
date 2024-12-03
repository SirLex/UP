// E09.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int length(int n) {
	int cnt = 0;
	if (n == 0)
	{
		return 1;
	}
	while (n != 0)
	{
		n /= 10;
		cnt++;
	}

	return cnt;
}
//9
int reverseNum(int n) {
	int reversed = 0;
	while (n != 0)
	{
		reversed = reversed * 10 + n % 10;
		n /= 10;
	}
	return reversed;
}

int KthDigitOfANumber(int n, int k) {
	if (length(n) < k)
	{
		return -1;
	}

	int reveresed = reverseNum(n);

	while (k != -1)
	{
		if (k == 0)
		{
			return reveresed % 10;
		}
		reveresed /= 10;
		k--;

	}
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
