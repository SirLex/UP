#include <iostream>
using namespace std;

char* GetLowerLettersFromWord(const char* word, char* result) {
	if (word == nullptr || result == nullptr)
	{
		return result;
	}

	int index = 0;

	while (*word != '\0') {
		if (*word >= 'a' && *word <= 'z')
		{
			result[index++] = *word;
		}

		word++;
	}

	result[index] = '\0';
	return result;
}

int main()
{
	const int ArrayCapacity = 1024;
	char input1[MAX_SIZE];
	char result[MAX_SIZE];

	cin.getline(input1, MAX_SIZE);

	cout << GetLowerLettersFromWord(input1, result);
}