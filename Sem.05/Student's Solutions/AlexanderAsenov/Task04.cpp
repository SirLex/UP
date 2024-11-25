#include <iostream>

using  namespace std;

const int MAXARRAYCAPACITY = 100;

int askForArrayLengthInput() {
	int n;
	do {
		cout << "Enter n [0, " << MAXARRAYCAPACITY << "]: ";
		cin >> n;
	} while (n < 0 || MAXARRAYCAPACITY < n);

	return n;
}

void enterArray(int arr[], const int SIZE) {
	cout << "Enter the numbers:" << endl;/

	for (int i = 0; i < SIZE; i++)
	{
		cin >> arr[i];
	}

	cout << endl;
}

void printArray(int arr[], const int SIZE) {
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << " ";
	}

	cout << endl;
}

void bubleSort(int arr[], const int SIZE) {
	for (int i = SIZE - 1; i >= 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (arr[j] > arr[j + 1]) {

				int swap = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = swap;
			}
		}
	}
}

int binarySearch(int searchedItem, int arr[], int start, int end) {

	if (start > end) {
		return -1;
	}

	int index = (start + end) / 2;

	if (arr[index] == searchedItem) {
		return index;
	}

	if (arr[index] < searchedItem) {
		return binarySearch(searchedItem, arr, index + 1, end);
	}

	return binarySearch(searchedItem, arr, start, index - 1);
}

int binarySearch(int searchedItem, int arr[], const int SIZE) {
	return binarySearch(searchedItem, arr, 0, SIZE - 1);
}

int main()
{
	int arr[MAXARRAYCAPACITY] = {};
	const int ARRSIZE = askForArrayLengthInput();
	enterArray(arr, ARRSIZE);

	bubleSort(arr, ARRSIZE);

	int searchedItem;
	cout << "Enter searched item: ";
	cin >> searchedItem;
	int binarySearchResult = binarySearch(searchedItem, arr, ARRSIZE);

	if (binarySearchResult != -1) {
		cout << "The searched item is in the array" << endl;
	}
	else {
		cout << "The searched item isn't in the array" << endl;
	}
}
