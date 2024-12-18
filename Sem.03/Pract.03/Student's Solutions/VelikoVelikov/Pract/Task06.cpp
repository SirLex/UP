#include <iostream>

using namespace std;

int main()
{
	int n; cin >> n;

	if (n < 0 || n > 100)
	{
		cout << "Invalid input!";
		return 0;
	}

	int count = 0;
	int input;

	do {
		cin >> input;
		count++;
		if (input < n)
		{
			cout << "Try higher!" << endl;
		}
		if (input > n)
		{
			cout << "Try lower!" << endl;
		}
	} while (n != input);

	cout << "Congratulations! The number is " << input << "! You tried " << count << " times!";

}

