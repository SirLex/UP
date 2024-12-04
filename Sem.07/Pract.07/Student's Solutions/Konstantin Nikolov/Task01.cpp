#include <iostream>
using namespace std;

const int MAX_LENGTH = 20;

void onlySmallLetters(const char* text, char* destination)
{
	if (text == nullptr || destination == nullptr)
	{
		return;
	}
	int index = 0;
	while (*text != '\0')
	{
		if (*text >= 'a' && *text <= 'z')
		{
			*(destination + index) = *text;
			index++;
		}
		text++;
	}
	*(destination + index) = '\0';
}

int main()
{
	char text[] = "Hello";
	char destination[MAX_LENGTH];
	int index = 0;
	onlySmallLetters(text, destination);
	cout << destination;
}