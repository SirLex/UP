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

void CensorSubstring(char* word, char* substring) {
	if (word == nullptr || substring == nullptr)
	{
		return;
	}

	int substrLen = Length(substring);

	char* wordStart = word;
	char* substringStart = substring;

	int wordStartIndex = 0;
	int beginningIndex = -1;

	while (*wordStart != '\0')
	{
		char wordSymbol = *wordStart;
		char substringSymbol = *substringStart;

		if (wordSymbol >= 'A' && wordSymbol <= 'Z')
		{
			wordSymbol = (char)((int)wordSymbol + 32);
		}

		if (substringSymbol >= 'A' && substringSymbol <= 'Z')
		{
			substringSymbol = (char)((int)substringSymbol + 32);
		}

		if (wordSymbol == substringSymbol)
		{
			if (beginningIndex == -1)
			{
				beginningIndex = wordStartIndex;
			}

			substringStart++;
			wordStart++;
			wordStartIndex++;

			if (*substringStart == '\0')
			{
				for (size_t i = beginningIndex; i < beginningIndex + substrLen; i++)
				{
					*(word + i) = '*';
				}

				substringStart = substring;
			}
		}
		else
		{
			wordStart++;
			wordStartIndex++;
			beginningIndex = -1;
		}
	}
}

int main()
{
	const int ArrayCapacity = 1024;
	char input1[MAX_SIZE];
	char input2[MAX_SIZE];

	cin.getline(input1, MAX_SIZE);
	cin.getline(input2, MAX_SIZE);

	CensorSubstring(input1, input2);
	cout << input1;
}