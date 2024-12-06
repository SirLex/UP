#include <iostream>
using namespace std;

void RemoveRepeatingLetters(char* word, char* result) {
	if (word == nullptr)
	{
		return;
	}

	char* start = word;

	const int ALPHABET_SIZE = 123;
	int alphabet[ALPHABET_SIZE];

	while (*word != '\0')
	{
		if (alphabet[*word - 0] != 1)
		{
			alphabet[*word - 0] = 1;
		}

		word++;
	}

	while (*start != '\0')
	{
		if (alphabet[*start - 0] == 1)
		{
			*result = *start;
			result++;

			alphabet[*start - 0]++;
		}

		start++;
	}

	*result = '\0';
}


int main()
{
	const int ArrayCapacity = 1024;
	char input1[MAX_SIZE];
	char result[MAX_SIZE];

	cin.getline(input1, MAX_SIZE);

	RemoveRepeatingLetters(input1, result);
	cout << result;
}