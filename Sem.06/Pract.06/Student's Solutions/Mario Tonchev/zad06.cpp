#include <iostream>
using namespace std;

int FindUniqueNumber(int array[], const int size) {
	int result = 0;

	for (size_t i = 0; i < size; i++)
	{
		result ^= array[i];
	}

	return result;
}

int main()
{
	const int ARRAY_SIZE = 7;
	
	int array[ARRAY_SIZE];

	for (size_t i = 0; i < ARRAY_SIZE; i++)
	{
		cin >> array[i];
	}

	cout << FindUniqueNumber(array, ARRAY_SIZE);
}