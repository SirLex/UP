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

void printArray(int arr[], const int SIZE) {
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << " ";
	}

	cout << endl;
}

void ReverseArray(int arr[], const int SIZE) {
	for (int i = 0; i < SIZE / 2; i++)
	{
		int swap = arr[i];
		arr[i] = arr[SIZE - i - 1];
		arr[SIZE - i - 1] = swap;
	}
}


int main()
{
	int arr[MAXARRAYCAPACITY] = {};
	const int ARRSIZE = askForArrayLengthInput();
	enterArray(arr, ARRSIZE);

	ReverseArray(arr, ARRSIZE);

	cout << "Reversed array: " << endl;
	printArray(arr, ARRSIZE);
}
