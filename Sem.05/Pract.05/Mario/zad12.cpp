using namespace std;
#include <iostream>

bool AreArraysLinearDependant(int arr1[], int arr2[], int size1, int size2) {
	double ratio = (double)arr1[0] / arr2[0];

	for (size_t i = 0; i < size1; i++)
	{
		if (arr1[i] != ratio * arr2[i])
		{
			return false;
		}
	}

	return true;
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

	if (AreArraysLinearDependant(numbers1, numbers2, size1, size2))
	{
		cout << "yes";
	}
	else
	{
		cout << "no";
	}
}