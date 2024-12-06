#include <iostream>
using namespace std;

int SubstringCount(char* word, char* substring) {
	if (word == nullptr || substring == nullptr)
	{
		return 0;
	}

	int count = 0;
	char* start = substring;

	while (*word != '\0')
	{
		if (*word == *start)
		{
			start++;

			if (*start == '\0')
			{
				start = substring;
				count++;
			}
		}
		else
		{
			start = substring;
		}

		word++;
	}

	return count;
}

int main()
{
	const int ArrayCapacity = 1024;
	char input1[MAX_SIZE];
	char input2[MAX_SIZE];

	cin.getline(input1, MAX_SIZE);
	cin.getline(input2, MAX_SIZE);

	cout << SubstringCount(input1, input2);
}