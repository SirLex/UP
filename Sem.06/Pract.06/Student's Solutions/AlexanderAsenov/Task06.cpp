#include <iostream>
using namespace std;

void enterArray(int* arr, int length) {
	cout << "Enter array: ";
	for (size_t i = 0; i < length; i++)
	{
		cin >> arr[i];
	}
}


int findNonRepeatingElement(int* arr, int length) {
	int result = arr[0];
	for (size_t i = 1; i < length; i++)
	{
		result = result ^ arr[i];
	}

	return result;
}

int main()
{
	int length;
	cout << "Enter length of arr: ";
	cin >> length;
	if (length % 2 == 0) {
		cout << "Wrong input";
		return 0;
	}

	int* arr = new int[length];
	enterArray(arr, length);
	cout << findNonRepeatingElement(arr, length) << endl;

	delete[] arr;
}