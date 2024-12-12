bool AnalyzeArr(int arr[], int length) {
	const int ARR_MIN_LEN = 2;
	if (length < ARR_MIN_LEN || arr == nullptr) return false;

	bool foundFirstFixed = false;
	for (int i = 0; i < length; i++) {
		if (arr[i] == i) {
			if (foundFirstFixed) return true;
			else foundFirstFixed = true;
		}
	}

	return false;
}