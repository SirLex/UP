using namespace std;
#include <iostream>

void Union(int arr1[], int arr2[], int result[], int size1, int size2) {
	int resultIndex = 0;

	for (size_t i = 0; i < size1; i++)
	{
		result[i] = arr1[i];
		resultIndex++;
	}

	for (size_t i = 0; i < size2; i++)
	{
		bool hasElement = false;

		for (size_t j = 0; j < resultIndex + 1; j++)
		{
			if (result[j] == arr2[i])
			{
				hasElement = true;
				break;
			}
		}

		if (!hasElement)
		{
			result[resultIndex] = arr2[i];
			resultIndex++;
		}
	}
}

void Intersect(int arr1[], int arr2[], int result[], int size1, int size2) {
	int repeatingElsIndexes[1000];
	int index = 0;

	for (size_t i = 0; i < size1; i++)
	{
		int element1 = arr1[i];

		for (size_t j = 0; j < size2; j++)
		{
			int element2 = arr2[j];

			if (element1 == element2)
			{
				repeatingElsIndexes[index] = i;
				index++;
			}
		}
	}

	for (size_t i = 0; i < index; i++)
	{
		int repeatingElementIndex = repeatingElsIndexes[i];
		int repeatingElement = arr1[repeatingElementIndex];

		result[i] = repeatingElement;
	}
}

int main()
{
	const int ArrayCapacity = 1000;

	int size1;
	int size2;
	cin >> size1 >> size2;

	if ((size1 < 1 || size1 > 1000) || (size2 < 1 || size2 > 1000)) {
		cout << "Please enter a number between 1 and 1000!";
		return 0;
	}

	int numbers1[ArrayCapacity];
	int numbers2[ArrayCapacity];
	int result[ArrayCapacity];

	for (size_t i = 0; i < size1; i++) {
		int number;
		cin >> number;

		numbers1[i] = number;
	}

	for (size_t i = 0; i < size2; i++) {
		int number;
		cin >> number;

		numbers2[i] = number;
	}

	Intersect(numbers1, numbers2, result, size1, size2);
	Union(numbers1, numbers2, result, size1, size2);
}