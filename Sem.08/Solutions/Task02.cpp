int strLen(const char* str) {
	if (str == nullptr) return -1;

	int len = 0;
	while (str[len] != '\0') {
		len++;
	}

	return len;
}

int CheckStr(char str[]) {
	if (str == nullptr) return -1;

	const int ASCII_TABLE_SIZE = 128;
	char occurrences[ASCII_TABLE_SIZE] = { 0 };

	int len = strLen(str);

	for (int i = 0; i < len; i++) {
		occurrences[str[i]]++;
	}

	bool foundFirstOdd = false;
	for (int i = 0; i < ASCII_TABLE_SIZE; i++) {
		if (occurrences[i] & 1) { // the same as: occurrences[i] % 2 != 0
			if (foundFirstOdd) return false;
			else foundFirstOdd = true;
		}
	}

	return true;
}