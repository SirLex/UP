#include <iostream>
using namespace std;

void ReplaceSymbol(char* word, char x, char a, char b) {
	if (word == nullptr)
	{
		return;
	}

	int counter = 1;

	while (*word != '\0')
	{
		if (*word == x)
		{
			if (counter % 2 == 0)
			{
				*word = b;
			}
			else
			{
				*word = a;
			}

			counter++;
		}

		word++;
	}
}

int main()
{
	const int ArrayCapacity = 1024;
	char input1[MAX_SIZE];
	char result[MAX_SIZE];

	cin.getline(input1, MAX_SIZE);

	char x, a, b;
	cin >> x >> a >> b;

	ReplaceSymbol(input1, x, a, b);
	cout << input1;
}