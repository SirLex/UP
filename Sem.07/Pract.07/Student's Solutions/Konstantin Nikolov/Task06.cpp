#include <iostream>
using namespace std;

void longestCommonPrefix(const char* text1,
						 const char* text2,
						 const char* text3,
						 char* destination)
{
	if (text1 == nullptr || text2 == nullptr || text3 == nullptr || destination == nullptr)
	{
		return;
	}
	int index = 0;
	while (*text1 != '\0' && *text2 != '\0' && *text3 != '\0')
	{
		if (*text1 != *text2 || *text1 != *text3)
		{
			break;
		}
		*(destination + index) = *text1;
		index++;
		text1++;
		text2++;
		text3++;
	}
	*(destination + index) = '\0';
}

int main()
{
	char text1[] = "flower";
	char text2[] = "flow";
	char text3[] = "flight";
	char destination[MAX_LENGTH];
	longestCommonPrefix(text1, text2, text3, destination);
	cout << destination;
}