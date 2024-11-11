#include <iostream>
using namespace std;

int* removevalue(int arr[], int capacity, int poss, int &size) {
	while (poss > capacity) 
	{
		cout << "Possition is out of range! Enter a new one!"<<endl;
		cin >> poss;
	};
	for (int i = poss-1; i < size-1; i++)
	{
		arr[i] = arr[i + 1];
	}
	--size;
	return arr;
}
//capacity - всички елементи/const
//size - бр ел., които разглеждаме