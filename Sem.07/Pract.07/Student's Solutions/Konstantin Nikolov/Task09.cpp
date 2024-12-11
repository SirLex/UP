#include <iostream>
using namespace std;

bool isPrefixToWord(const char* text, const char* prefix)
{
	if (text == nullptr || prefix == nullptr)
	{
		return false;
	}
	const char* textLetter = text;
	const char* prefixLetter = prefix;
	while (*textLetter != '\0' && *prefixLetter != '\0')
	{
		if (*textLetter != *prefixLetter)
		{
			return false;
		}
		textLetter++;
		prefixLetter++;
	}
	return true;
}

int firstSubstringIndex(const char* text, const char* word)
{
	if (text == nullptr || word == nullptr)
	{
		return -1;
	}
	int index = 0;
	while (*text != '\0')
	{
		if (isPrefixToWord(text, word))
		{
			return index;
		}
		index++;
		text++;
	}
	return -1;
}

int main()
{
	char text[] = "Hello my friend!";
	char word[] = "my";
	cout << firstSubstringIndex(text, word);
}