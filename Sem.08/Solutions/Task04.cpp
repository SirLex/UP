int strLen(const char* str) {
	if (str == nullptr) return -1;

	int len = 0;
	while (str[len] != '\0') {
		len++;
	}

	return len;
}

bool isNumber(char ch) {
	return ch >= '0' && ch <= '9';
}

int charToInt(char ch) {
	if (!isNumber(ch)) return -1;

	return ch - '0';
}

long strToInt(char* str, unsigned len) {
	if (str == nullptr) return -1; // :/

	long result = 0;
	for (int i = 0; i < len; i++) {
		result *= 10;

		char digit = charToInt(str[i]);
		if (digit == -1) return -1; // :/

		result += digit;
	}

	return result;
}

bool validateHHMMSS(int HH, int MM, int SS) {
	return HH >= 0 && HH <= 23 && MM >= 0 && MM <= 59 && SS >= 0 && SS <= 59;
}

int CheckTimeStr(char timeStr[]) {
	if (timeStr == nullptr) return -1;

	const int TIME_STR_LEN = 8;
	int len = strLen(timeStr);
	if (len != TIME_STR_LEN) return -1;

	const int firstColonIdx = 2;
	const int secondColonIdx = 5;
	const int minsBegIdx = 3;
	const int secsBegIdx = 6;

	if (timeStr[firstColonIdx] != ':' || timeStr[secondColonIdx] != ':') return -1;

	int hours = strToInt(timeStr, 2);
	int mins = strToInt(timeStr + minsBegIdx, 2);
	int secs = strToInt(timeStr + secsBegIdx, 2);
	if (!validateHHMMSS(hours, mins, secs)) return -1;

	return 0;
}