using namespace std;
#include <iostream>

void PrintArray(arr, size) {
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void MergeSortedArrays(int arr1[], int arr2[], int result[], int size1, int size2) {
	int i = 0;
	int j = 0;
	int k = 0;

	while (i < size1 && j < size2)
	{
		if (arr1[i] < arr2[j])
		{
			result[k++] = arr1[i++];
		}
		else
		{
			result[k++] = arr2[j++];
		}
	}

	while (i < size1)
	{
		result[k++] = arr1[i++];
	}

	while (j < size1)
	{
		result[k++] = arr2[j++];
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

	MergeSortedArrays(numbers1, numbers2, result, size1, size2);
	PrintArray(result);
}