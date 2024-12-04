#include <iostream>
using namespace std;

int occurenceCount(const char* text, char searchChar)
{
	if (text == nullptr)
	{
		return -1;
	}
	int occurence = 0;
	while (*text != '\0')
	{
		if (*text == searchChar)
		{
			occurence++;
		}
		text++;
	}
	return occurence;
}

int main()
{
	char text[] = "abacaba";
	cout << occurenceCount(text, 'a');
}