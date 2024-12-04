#include <iostream>
using namespace std;

const int MAX_LENGTH = 100;
const int TO_LOWER = 'a' - 'A';

bool isSameLetter(char letter1, char letter2)
{
	if (letter1 > letter2)
	{
		return isSameLetter(letter2, letter1);
	}
	if (letter1 >= 'a' && letter1 <= 'z')
	{
		return letter1 == letter2;
	}
	if (letter1 >= 'A' && letter1 <= 'Z')
	{
		return (letter1 == letter2) || (letter1 + TO_LOWER == letter2);
	}
	return false;
}

int strLength(const char* text)
{
	if (text == nullptr)
	{
		return -1;
	}
	int index = 0;
	while (text[index] != '\0')
	{
		index++;
	}
	return index;
}

bool isPrefixToWord(const char* text, const char* prefix)
{
	if (text == nullptr || prefix == nullptr)
	{
		return false;
	}
	const char* textLetter = text;
	const char* prefixLetter = prefix;
	while (*prefixLetter != '\0')
	{
		if (*textLetter != *prefixLetter && !isSameLetter(*textLetter, *prefixLetter))
		{
			return false;
		}
		textLetter++;
		prefixLetter++;
	}
	return *textLetter == ' ' || *textLetter == '\0';
}

void replaceText(const char* text, const char* substring, char* destination)
{
	if (text == nullptr || substring == nullptr || destination == nullptr)
	{
		return;
	}
	int index = 0;
	while (*text != '\0')
	{
		if (isPrefixToWord(text, substring))
		{
			int substringIndex = 0;
			int length = strLength(substring);
			for (int i = 0; i < length; i++)
			{
				*(destination + index + i) = '*';
			}
			index += length - 1;
			text += length - 1;
		}
		else
		{
			*(destination + index) = *text;
		}
		index++;
		text++;
	}
	*(destination + index) = '\0';
}

int main()
{
	char text[] = "Howdy! How are you? How was your day?";
	char substring[] = "how";
	char destination[MAX_LENGTH];
	replaceText(text, substring, destination);
	cout << destination;
}