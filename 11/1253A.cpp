#include <iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int i, j, k, l, m, n;
		cin >> n;
		int *a = new int[n + 1]; 
		int *b = new int[n + 1];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		for (int i = 0; i < n; i++) {
			cin >> b[i];
		}

		int f = 0, c = 0, ind;
		for (int i = 0; i < n; i++)
		{
			if (a[i] - b[i] != 0)
			{
				if (f == 0)
				{
					ind = i;	f = a[i] - b[i];
				}
				else if (ind + 1 != i || f != a[i] - b[i])
				{
					c = 1;
					break;
				}
				ind = i;
			}
			if (c == 1)
			{
				break;
			}
		}

		if (c == 0 && f <= 0) {
			cout << "YES\n";
		}
		else {
			cout << "NO\n";
		}

		delete[] a;
		delete[] b;
	}

	return 0;
}