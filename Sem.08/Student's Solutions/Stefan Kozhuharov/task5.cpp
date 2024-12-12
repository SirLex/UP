#include <iostream>
using namespace std;

int const MAX_SIZE = 1024;

int CountSymbols(char arr[], char symbol) {

	if (arr == nullptr) {

		return 0;

	}

	int counter = 0;

	while (*arr != '\0') {

		if (*arr == symbol) {

			counter++;

		}

		arr++;

	}

	return counter;

}

bool ContainsSymbol(char arr[], char symbol) {

	if (arr == nullptr) {

		return false;

	}

	while (*arr != '\0') {

		if (*arr == symbol) {

			return true;

		}

		arr++;

	}

	return false;

}

char* CheckStr(char arr[]) {

	if (arr == nullptr) {

		return nullptr;

	}

	char result[MAX_SIZE];
	int i = 0;

	while (*arr != '\0') {

		if (ContainsSymbol(result, *arr)) {

			arr++;
			continue;

		}

		if(CountSymbols(arr, *arr) > 1){
		
			result[i] = *arr;
			i++;

		}

		arr++;

	}

	result[i] = '\0';
	return result;

}

int main()
{

	char arr[MAX_SIZE] = "aif8sltt8f";
	cout << CheckStr(arr);

}
