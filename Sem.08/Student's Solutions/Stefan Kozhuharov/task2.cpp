#include <iostream>
using namespace std;

int StrLen(char arr[]) {

	int counter = 0;

	while (*arr != '\0') {

		counter++;
		arr++;

	}

	return counter;

}

int CountSymbols(char arr[], char symbol) {

	int counter = 0;

	while (*arr != '\0') {

		if (*arr == symbol) {

			counter++;
			*arr = ' ';

		}

		arr++;

	}

	return counter;

}

int CheckStr(char arr[]) {

	int length = StrLen(arr), count, oddSymbolCount = 0;
	char currentSymbol;

	if (length < 2 || arr == nullptr) {

		return -1;

	}

	while (*arr != '\0') {

		if (*arr != ' ') {

			currentSymbol = *arr;

		}

		count = CountSymbols(arr, currentSymbol);

		if (count % 2 != 0) {

			oddSymbolCount++;

			if (length % 2 == 0) {
				return 0;

			}
			else if (length % 2 != 0 && oddSymbolCount == 2) {

				return 0;

			}

		}

		arr++;

	}

	return 1;

}

int main()
{
	int const MAX_SIZE = 10;
	char arr[MAX_SIZE] = "beblehl";
	cout << CheckStr(arr);

}
