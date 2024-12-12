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
void CheckStr(char* word, char* answer)
{
	int length = lengthStr(word);
	int result[128] = {};
	for (int i = 0; i < length; i++)
	{
		result[word[i]]++;
	}
	for (int i = 0; i < 128; i++)
	{
		if (result[i] >= 2)
		{
			*answer = i;
			answer++;
		}
	}
}
