#include <iostream>
using namespace std;

const int BUFFER = 100;

int indexOf(char* str, char* substring, int start) {
	if (str == nullptr || substring == nullptr) {
		return -1;
	}

	int i = start;

	while (str[i] != '\0') {
		int j = 0;
		while (str[i + j] != '\0' && str[i + j] == substring[j]) {
			j++;
			if (substring[j] == '\0') {
				return i;
			}
		}

		i++;
	}

	return -1;
}

int countSubstring(char* str, char* substring) {
	int count = 0;

	int i = 0;
	while (true) {
		i = indexOf(str, substring, i);
		
		if (i == -1) {
			break;
		}
	
		count++;
		i++;
	}

	return count;
}

int main()
{
	char str[BUFFER];
	char substring[BUFFER];

	cin.getline(str, BUFFER);
	cin.getline(substring, BUFFER);

	cout << countSubstring(str, substring) << endl;

}