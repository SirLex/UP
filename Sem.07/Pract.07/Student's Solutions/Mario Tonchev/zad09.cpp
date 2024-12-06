#include <iostream>
using namespace std;

int IndexOf(char* word, char* substring) {
	if (word == nullptr || substring == nullptr)
	{
		return -1;
	}

	int index = -1;
	int currentIndex = 0;
	char* start = substring;

	while (*word != '\0')
	{
		if (*word == *start)
		{
			if (index == -1)
			{
				index = currentIndex;
			}

			start++;

			if (*start == '\0')
			{
				return index;
			}
		}
		else
		{
			index = -1;
			start = substring;
		}

		word++;
		currentIndex++;
	}

	return -1;
}

int main()
{
	const int ArrayCapacity = 1024;
	char input1[MAX_SIZE];
	char input2[MAX_SIZE];

	cin.getline(input1, MAX_SIZE);
	cin.getline(input2, MAX_SIZE);

	cout << IndexOf(input1, input2);
}