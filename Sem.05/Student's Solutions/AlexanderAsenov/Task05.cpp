#include <iostream>
using namespace std;

// Don't do it but at around 800001 we get just a warning
// Makes around 0.8 MB size of the array
// Interestingly 799999 is prime
const int MAXINPUTFORSIEVEOFERATOSTHENES = 10001;

void setValuesOfArrayToTrue(bool arr[], const int SIZE) {
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = true;
	}
}

int sieveOfEratosthenesAskForInput() {
	int n;
	do {
		cout << "Enter n [0, " << MAXINPUTFORSIEVEOFERATOSTHENES - 1 << "]: ";
		cin >> n;
	} while (n < 0 || MAXINPUTFORSIEVEOFERATOSTHENES - 1 < n);

	return n;
}

void sieveOfEratosthenes(const int SIZE) {
	bool isPrime[MAXINPUTFORSIEVEOFERATOSTHENES] = {};
	setValuesOfArrayToTrue(isPrime, MAXINPUTFORSIEVEOFERATOSTHENES);
	isPrime[0] = false;
	isPrime[1] = false;
	for (int i = 2; i <= SIZE; i++)
	{
		if (isPrime[i]) {
			for (int j = 2 * i; j <= SIZE; j += i)
			{
				isPrime[j] = false;
			}
		}
	}

	for (int i = 0; i <= SIZE; i++)
	{
		if (isPrime[i]) {
			cout << i << endl;
		}
	}
}

int main()
{
	sieveOfEratosthenes(sieveOfEratosthenesAskForInput());
}

