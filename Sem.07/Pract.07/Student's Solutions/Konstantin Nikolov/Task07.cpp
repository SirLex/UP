#include <iostream>
using namespace std;

int lexicographicalOrder(const char* text1, const char* text2)
{
	if (text1 == nullptr || text2 == nullptr)
	{
		return -1;
	}
	while (*text2 != '\0')
	{
		if (*text1 > *text2)
		{
			return 1;
		}
		else if (*text1 < *text2)
		{
			return -1;
		}
		text1++;
		text2++;
	}
	return *text1 != '\0';
}

int main()
{
	char text1[] = "abdc";
	char text2[] = "abd";
	cout << lexicographicalOrder(text1, text2);
}