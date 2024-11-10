#include <iostream>

using namespace std;

bool isSymmetric(int arr[], int size) {
	for (int i = 0; i < size / 2; i++) {
		if (arr[i] != arr[size - 1 - i]) {
			return false;
		}
	}
	return true;
}

int main() {
	const int SIZE = 6;
	int arr[SIZE] = { 1, 2, 3, 3, 2, 1 };

	if (isSymmetric(arr, SIZE)) {
		cout << "yes" << endl;
	}
	else {
		cout << "no" << endl;
	}

	return 0;
}
