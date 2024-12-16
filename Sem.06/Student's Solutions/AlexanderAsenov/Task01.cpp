#include <iostream>
using namespace std;

int* askUserForArray(int length) {
	int* arr = new int[length];

	for (size_t i = 0; i < length; i++)
	{
		cin >> arr[i];
	}

	return arr;
}

int findNonRepeatingNumber(int* arr, int length) {
	int result = 0;
	for (size_t i = 0; i < length; i++)
	{
		result ^= arr[i];
	}

	return result;
}

int main()
{
	int length = 0;
	cin >> length;

	if (length % 2 == 0) {
		return 1;
	}

	int* arr = askUserForArray(length);
	cout << findNonRepeatingNumber(arr, length) << endl;
	delete[] arr;
}