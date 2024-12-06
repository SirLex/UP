#include <iostream>
using namespace std;

char* LongestCommonPrefix(char* string1, char* string2, char* string3, char* result) {
	if (string1 == nullptr || string2 == nullptr || string3 == nullptr || result == nullptr)
	{
		return result;
	}

	if (*string1 != *string2 || *string1 != *string3 || *string2 != *string3)
	{
		*result = '\0';
		return result;
	}

	char* start = result;

	while (*string1 != '\0' && *string2 != '\0' && *string3 != '\0')
	{
		if (*string1 == *string2 && *string1 == *string3 && *string2 == *string3)
		{
			*result = *string1;
			result++;
		}
		else
		{
			*result = '\0';
			return start;
		}

		string1++;
		string2++;
		string3++;
	}
}

int main()
{
	const int ArrayCapacity = 1024;
	char input1[MAX_SIZE];
	char input2[MAX_SIZE];
	char input3[MAX_SIZE];
	char result[MAX_SIZE];

	cin.getline(input1, MAX_SIZE);
	cin.getline(input2, MAX_SIZE);
	cin.getline(input3, MAX_SIZE);

	cout << LongestCommonPrefix(input1, input2, input3, result);
}