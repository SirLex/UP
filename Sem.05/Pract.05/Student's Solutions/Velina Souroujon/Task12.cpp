#include <iostream>
using namespace std;

const int FIRST_ARRAY_CAPACITY = 1000;
const int SECOND_ARRAY_CAPACITY = 1000;

const double EPSILON = pow(0.1, 20);

double pow(double n, int k)
{
	double result = 1;

	for (int i = 0; i < k; i++)
	{
		result *= n;
	}

	return result;
}

double fabs(double num)
{
	return num >= 0
		? num
		: -1 * num;
}

bool areEqual(double a, double b)
{
	return fabs(a - b) < EPSILON;
}

void readArray(int arr[], int size)
{
	if (arr == NULL)
	{
		cout << "Array cannot be null!";
		return;
	}

	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
}

bool areLinearltDependent(int firstArray[], int secondArray[], int size)
{
	if (firstArray == NULL || secondArray == NULL)
	{
		cout << "Array cannot be null!";
		return false;
	}

	double k = 0;
	bool kAssigned = false;
	bool zeroFlag = false;

	for (int i = 0; i < size; i++)
	{
		int firstElement = firstArray[i];
		int secondElement = secondArray[i];

		if (zeroFlag && (secondElement != 0))
		{
			return false;
		}

		if (secondElement == 0)
		{
			if (firstElement != 0)
			{
				zeroFlag = true;

				if (kAssigned)
				{
					return false;
				}
			}

			continue;
		}

		double currentK = (double) firstElement / secondElement;
		if (!kAssigned)
		{
			kAssigned = true;
			k = currentK;
		}
		else if(!areEqual(k, currentK))
		{
			return false;
		}
	}

	return true;
}

int main()
{
	int firstArray[FIRST_ARRAY_CAPACITY];
	int secondArray[SECOND_ARRAY_CAPACITY];

	int size;
	cin >> size;

	readArray(firstArray, size);
	readArray(secondArray, size);

	if (areLinearltDependent(firstArray, secondArray, size))
	{
		cout << "yes";
	}
	else
	{
		cout << "no";
	}

	return 0;
}
