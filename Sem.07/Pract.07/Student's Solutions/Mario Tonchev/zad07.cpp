#include <iostream>
using namespace std;

int CompareStrings(char* string1, char* string2) {
	if (string1 == nullptr || string2 == nullptr)
	{
		return 0;
	}

	while (*string1 != '\0' && *string2 != '\0')
	{
		if (*string1 < *string2)
		{
			return -1;
		}
		else if (*string1 > *string2)
		{
			return 1;
		}

		string1++;
		string2++;
	}

	if (*string1 == '\0' && *string2 == '\0')
	{
		return 0;
	}
	else if (*string1 == '\0')
	{
		return -1;
	}
	else
	{
		return 1;
	}
}


int main()
{
	const int ArrayCapacity = 1024;
	char input1[MAX_SIZE];
	char input2[MAX_SIZE];

	cin.getline(input1, MAX_SIZE);
	cin.getline(input2, MAX_SIZE);

	cout << CompareStrings(input1, input2);
}