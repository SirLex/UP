#include <iostream>
using namespace std;

const int MAX_LENGTH = 20;

void replaceEvenOdd(const char* text, char x, char a, char b, char* destination)
{
	if (text == nullptr || destination == nullptr)
	{
		return;
	}
	int index = 0;
	int occurence = 0;
	while (*text != '\0')
	{
		if (*text == x)
		{
			occurence++;
			*(destination + index) = (occurence % 2 == 0) ? a : b;
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
	char text[] = "H_ll_ my fri_nd";
	char destination[MAX_LENGTH];
	int index = 0;
	replaceEvenOdd(text, '_', 'o', 'e', destination);
	cout << destination;
}