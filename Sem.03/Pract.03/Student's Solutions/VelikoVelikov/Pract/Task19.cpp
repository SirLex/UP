#include <iostream>

using namespace std;

int main()
{
	int n; cin >> n;

	int num = 1;

    for (int row = 0; row < n; row++) {
        for (int col = 0; col < n; col++) {
            int num;

            if (col % 2 == 0) {
                num = col * n + row + 1;
            }
            else {
                num = (col + 1) * n - row;
            }

            cout <<num << " ";
        }
        cout << endl;
    }
}
