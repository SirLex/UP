#include <iostream>
using namespace std;

void PrintSubsets(int array[], const int size) {
	int totalSubsets = pow(2, size);

	for (int i = 0; i < totalSubsets; i++) {
		cout << "[";
		bool firstElement = true;

		for (int j = 0; j < size; j++) {
			if (i & (1 << j)) {
				if (!firstElement) {
					cout << ", ";
				}

				cout << array[j];
				firstElement = false;
			}
		}
		cout << "]" << endl;
	}
}

int main()
{
	const int ARRAY_SIZE = 3;

	int array[ARRAY_SIZE];

	for (size_t i = 0; i < ARRAY_SIZE; i++)
	{
		cin >> array[i];
	}

	PrintSubsets(array, ARRAY_SIZE);
}