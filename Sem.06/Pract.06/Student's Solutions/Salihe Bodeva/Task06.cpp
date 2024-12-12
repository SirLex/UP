// Task06.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int findOneOccurence(int arr[], int size) {

	int occurencesCount = 0;

	for (int i = 0; i < size; i++)
	{
		int currentNum = arr[i];


		for (int j = 0; j < size; j++)
		{
			int nextNum = arr[j];
			if ((currentNum & nextNum) == currentNum)
			{
				occurencesCount++;
			}
		}

		if (occurencesCount == 1)
		{
			return currentNum;
		}
		occurencesCount = 0;
	}
	return -1;
}


int main()
{
	int array[] = { 9,18, 9, 12, 18, 15, 12 };
	int size = 7;

	cout << findOneOccurence(array, size);
}

