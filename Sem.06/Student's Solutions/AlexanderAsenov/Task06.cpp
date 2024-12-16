#include <iostream>
using namespace std;

const char BACKSPACE = (char)8;

int* askUserForArray(int length) {
	int* arr = new int[length];

	for (size_t i = 0; i < length; i++)
	{
		cin >> arr[i];
	}

	return arr;
}

bool bitAtPos(int num, int pos) {
	return (num >> pos) & 1;
}

void printAllSubsets(int* arr, int length) {
	int lastNum = 1 << length;

	if (length < 0) {
		return;
	}

	cout << "[]";
	if (length == 0) {
		return;
	}

	cout << ", ";

	for (size_t i = 1; i < lastNum; i++)
	{
		cout << "[";
		for (size_t j = 0; j < length; j++)
		{
			if (bitAtPos(i, j)) {
				cout << arr[j] << ", ";
			}
		}
		cout << BACKSPACE << BACKSPACE << "], ";
	}
	cout << BACKSPACE << BACKSPACE;
}

int main()
{
	int length = 0;
	cin >> length;

	int* arr = askUserForArray(length);
	printAllSubsets(arr, length);
	delete[] arr;
}