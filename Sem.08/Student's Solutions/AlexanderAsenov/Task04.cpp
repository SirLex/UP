#include <iostream>
using namespace std;

int getLength(char* str) {
	if (str == nullptr) {
		return 0;
	}

	int count = 0;

	while (*str != '\0') {
		str++;
		count++;
	}

	return count;
}

bool isNumberInRange(char* str, int startIndex, int endIndex, int startRange, int endRange) {
	if (str == nullptr) {
		return false;
	}

	int result = 0;
	for (int i = startIndex; i <= endIndex; i++)
	{
		if ('0' <= str[i] && str[i] <= '9') {
			result *= 10;
			result += str[i] - '0';
		}
		else
		{
			return false;
		}
	}

	return startRange <= result && result <= endRange;
}

int CheckTimeStr(char str[]) {
	if (str == nullptr) {
		return -1;
	}

	if (getLength(str) != 8) {
		return -1;
	}

	if (str[2] != ':' || str[5] != ':') {
		return 0;
	}

	return isNumberInRange(str, 0, 1, 0, 23)
		&& isNumberInRange(str, 3, 4, 0, 60)
		&& isNumberInRange(str, 6, 7, 0, 60);
}

int main()
{
	char str[] = "23:49:51";
	cout << CheckTimeStr(str) << endl;
}