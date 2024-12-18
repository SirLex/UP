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
	while (*prefixLetter != '\0')
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

int substringCount(const char* text, const char* substring)
{
	if (text == nullptr || substring == nullptr)
	{
		return -1;
	}
	int count = 0;
	while (*text != '\0')
	{
		if (isPrefixToWord(text, substring))
		{
			count++;
		}
		text++;
	}
	return count;
}

int main()
{
	char text[] = "abcdabc";
	char substring[] = "abc";
	cout << substringCount(text, substring);
}