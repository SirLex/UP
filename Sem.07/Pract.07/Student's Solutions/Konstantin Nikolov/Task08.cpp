#include <iostream>
using namespace std;

const int MAX_LENGTH = 20;
const int ALPHABET_LENGTH = 'z' - 'a' + 1;

void deleteRepeating(const char* text, char* destination)
{
	if (text == nullptr || destination == nullptr)
	{
		return;
	}
	int index = 0;
	bool isSeen[ALPHABET_LENGTH];
	for (int i = 0; i < ALPHABET_LENGTH; i++)
	{
		isSeen[i] = 0;
	}
	while (*text != '\0')
	{
		if (*text < 'a' || *text > 'z')
		{
			return;
		}
		if (isSeen[*text - 'a'] == false)
		{
			*(destination + index) = *text;
			index++;
		}
		isSeen[*text - 'a'] = 1;
		text++;
	}
	*(destination + index) = '\0';
}

int main()
{
	char text[] = "hmmm";
	char destination[MAX_LENGTH];
	deleteRepeating(text, destination);
	cout << destination;
}