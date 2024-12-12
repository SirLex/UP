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
void GetWord(char* str, char* destination)
{
	int strLength = lengthStr(str);
	int maxLength = 0;
	int currentLength = 0;
	int endMaxIndex = 0;
	for (int i = 0; i < strLength; i++)
	{
		if (str[i] != ' ')
		{
			currentLength++;
			if (currentLength > maxLength)
			{
				maxLength = currentLength;
				endMaxIndex = i;
			}
		}
		else
		{
			currentLength = 0;
		}
	}
	for (int i = 0; i < maxLength; i++)
	{
		destination[i] = str[endMaxIndex - maxLength + 1 + i];
	}
}
