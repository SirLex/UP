#include <iostream>
using namespace std;
int main()
{
	int m, n; cin >> m >> n;

	int cnt = 1;
	for (int i = 1; i <= m; i++)
	{
		
		for (int j=1; j <= n; j++)
		{
			cout << cnt++ << " ";
		}
		cout << endl;
	}
}
