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

int CheckStr(char* word)
{
	int length = lengthStr(word);
	if (word == nullptr || length < 2)
	{
		return -1;
	}
	int result[128] = {};
	for (int i = 0; i < length; i++)
	{
		result[word[i]]++;
	}
	if (length % 2 == 0)
	{
		for (int i = 0; i < 128; i++)
		{
			if (result[i] % 2 != 0)
			{
				return 0;
			}
		}
	}
	else
	{
		bool haveOdd = false;
		for (int i = 0; i < 128; i++)
		{
			if (result[i] % 2 != 0 && !haveOdd)
			{
				haveOdd = true;
			}
			else if (result[i] % 2 != 0 && haveOdd)
			{
				return 0;
			}
		}
	}
	return 1;
}
