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

bool IsAlphanumeric(char c) {
	return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9');
}

void CensorWord(char* word, char* substring) {
	if (word == nullptr || substring == nullptr)
	{
		return;
	}

	int wordLen = Length(word);
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
				char nextChar = *wordStart;
				char previousChar = (beginningIndex == 0) ? ' ' : *(word + beginningIndex - 1);

				if ((!IsAlphanumeric(previousChar) && !IsAlphanumeric(nextChar)) ||
					(beginningIndex == 0 && !IsAlphanumeric(nextChar)))
				{
					for (size_t i = beginningIndex; i < beginningIndex + substrLen; i++)
					{
						*(word + i) = '*';
					}
				}

				substringStart = substring;
				beginningIndex = -1;
			}
		}
		else
		{
			wordStart++;
			wordStartIndex++;
			beginningIndex = -1;
			substringStart = substring;
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

	CensorWord(input1, input2);
	cout << input1;
}