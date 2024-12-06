#include <iostream>
using namespace std;

int CountSymbol(char* word, char symbol) {
	if (word == nullptr)
	{
		return 0;
	}

	int count = 0;

	while (*word != '\0')
	{
		if (*word == symbol)
		{
			count++;
		}

		word++;
	}

	return count;
}

int main()
{
	const int ArrayCapacity = 1024;
	char input1[MAX_SIZE];

	cin.getline(input1, MAX_SIZE);

	char symbol;
	cin >> symbol;

	cout << CountSymbol(input1, symbol);
}