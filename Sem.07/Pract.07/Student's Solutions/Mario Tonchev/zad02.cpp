#include <iostream>
using namespace std;

int Length(const char* word) {
	int length = 0;

	while (*word != '\0')
	{
		length++;
		word++;
	}

	return length;
}

char* GetSubstring(const char* word, char* result, int beg, int end) {
	if (word == nullptr || result == nullptr)
	{
		return result;
	}

	if (beg > Length(word) || word == nullptr || result == nullptr || beg < 0 || end < 0 || beg > end)
	{
		return result;
	}

	int resultIndex = 0;
	int wordIndex = beg;

	while (wordIndex <= end)
	{
		if (word[wordIndex] == '\0')
		{
			result[resultIndex] = '\0';

			return result;
		}

		result[resultIndex++] = word[wordIndex++];
	}

	result[resultIndex] = '\0';

	return result;
}

int main()
{
	const int ArrayCapacity = 1024;
	char input1[MAX_SIZE];
	char result[MAX_SIZE];

	cin.getline(input1, MAX_SIZE);

	int beg, end;
	cin >> beg >> end;

	cout << GetSubstring(input1, result, beg, end);
}