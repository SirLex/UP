#include <iostream>
using namespace std;

const int SIZEOFBYTE = 8;
const char BACKSPACE = 8;

void enterArray(int* arr, int length) {
	cout << "Enter array: ";
	for (size_t i = 0; i < length; i++)
	{
		cin >> arr[i];
	}
}

bool bitAtPos(unsigned int num, int pos) {
	return (num >> pos) & 1;
}


void writeAllSubsets(int* arr, int length) {
	int end = 0;
	//0000000000
	//1111111111
	for (int i = 0; i < length; i++)
	{
		end = end << 1;
		end++;
	}

	cout << "[], ";
	for (size_t i = 1; i <= end; i++)
	{
		cout << "[";
		for (size_t j = 0; j < length; j++)
		{
			if (bitAtPos(i, j)) {
				cout << arr[j] << " ";
			}
		}
		cout << BACKSPACE;
		cout << "], ";
	}
	cout << BACKSPACE << BACKSPACE;;
}

int main()
{
	int length;
	cout << "Enter length of arr: ";
	cin >> length;

	int* arr = new int[length];
	enterArray(arr, length);

	writeAllSubsets(arr, length);

	delete[] arr;
}