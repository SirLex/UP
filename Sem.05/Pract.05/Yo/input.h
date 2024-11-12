#ifndef INPUT_H
#define INPUT_H

int* inputArray(int& arrSize, int maxArrLength = 1000) {
	do {
		std::cout << "Input number 1:" << maxArrLength << ": ";
		std::cin >> arrSize;
	} while (arrSize < 1 || arrSize > maxArrLength);

	int* arr = new int[arrSize];

	for (int i = 0; i < arrSize; i++) {
		std::cout << "Input [" << i << "]: ";
		std::cin >> arr[i];
	}

	return arr;
}
#endif
