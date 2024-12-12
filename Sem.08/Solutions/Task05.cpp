int strLen(const char* str) {
	if (str == nullptr) return -1;

	int len = 0;
	while (str[len] != '\0') {
		len++;
	}

	return len;
}

void CheckStr(char str[], char repeating[]) {
	if (!str || !repeating) return;

	const int ENOUGH_OCCURRENCES = 2;
	const int ASCII_TABLE_SIZE = 128;
	char occurrences[ASCII_TABLE_SIZE] = { 0 };

	int len = strLen(str);

	for (int i = 0; i < len; i++) {
		occurrences[str[i]]++;
	}

	int repeatingIdx = 0;
	for (int i = 0; i < ASCII_TABLE_SIZE; i++) {
		if (occurrences[i] >= ENOUGH_OCCURRENCES) {
			repeating[repeatingIdx] = i;
			repeatingIdx++;
		}
	}
	repeating[repeatingIdx] = '\0';
}