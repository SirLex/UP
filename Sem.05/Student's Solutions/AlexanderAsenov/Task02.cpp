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
	cout << "Enter the numbers:" << endl;
	
	for (int i = 0; i < SIZE; i++)
	{
		cin >> arr[i];
	}

	cout << endl;
}

int linearSearchInArray(int searchedItem, int arr[], const int SIZE) {
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] == searchedItem) {
			return i;
		}
	}
	return -1;
}


int main()
{
	int arr[MAXARRAYCAPACITY] = {};
	int ARRSIZE = askForArrayLengthInput();
	enterArray(arr, ARRSIZE);

	int searchedItem;
	cout << "Enter searched item: ";
	cin >> searchedItem;
	int linearSearchResult = linearSearchInArray(searchedItem, arr, ARRSIZE);

	if (linearSearchResult != -1) {
		cout << "The searched item is on position " << linearSearchResult << endl;
	}
	else {
		cout << "The searched item is not found";
	}
}
