#include <iostream>
using namespace std;

const int BUFFER = 100;

int indexOf(char* str, char* substring) {
	if (str == nullptr || substring == nullptr) {
		return -1;
	}

	int i = 0;

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

int main()
{
	char str[BUFFER];
	char substring[BUFFER];

	cin.getline(str, BUFFER);
	cin.getline(substring, BUFFER);

	cout << indexOf(str, substring) << endl;
}