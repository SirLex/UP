#include <iostream>
using namespace std;

const int MAX_LENGTH = 20;

void substring(const char* text, int beg, int end, char* destination)
{
	if (text == nullptr || destination == nullptr)
	{
		return;
	}
	if (beg < 0 || end < 0 || end < beg)
	{
		*destination = '\0';
		return;
	}
	int index = 0;
	while (*text != '\0' && index <= end)
	{
		if (index >= beg)
		{
			*(destination - beg + index) = *text;
		}
		index++;
		text++;
	}
	*(destination - beg + index) = '\0';
}

int main()
{
	char text[] = "Hello World!";
	char destination[MAX_LENGTH];
	int index = 0;
	substring(text, 6, 11, destination);
	cout << destination;
}