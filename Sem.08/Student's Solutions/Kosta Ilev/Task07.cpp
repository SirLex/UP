int lengthStr(char* arr)
{
	int length = 0;
	while (*arr != '\0')
	{
		length++;
		arr++;
	}
	return length;
}
bool doExist(char* symbols, char* word)
{
	int lengthSymbols = lengthStr(symbols);
	int lengthWord = lengthStr(word);
	if (lengthWord > lengthSymbols)
	{
		return false;
	}
	for (int i = lengthSymbols - 1; i >= 0; i--)
	{
		int counter = 0;
		for (int j = i; j >= i - lengthWord; j--)
		{
			if (symbols[j] != word[counter])
			{
				break;
			}
			counter++;
		}
		if (counter == lengthWord)
		{
			return true;
		}
	}
	return false;
}
