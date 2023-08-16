#include <iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, r = 0, inc = 0, dec = 0;
		cin >> n;
		int i;
		int *a = new int[n];
		for (i = 0; i < n; i++) {
			a[i] = 0;
		}
		for (i = 0; i < n; i++) {
			cin >> a[i];
		}
		if (n <= 3) {
			cout << "YES\n";
		}
		else
		{
			for (i = 0; i < n; i++)
			{
				r = (i + 1) % n;
				if (a[r] > a[i]) {
					inc++;
				}
				else {
					dec++;
				}
			}
			if (inc != n - 1 && dec != n - 1) {
				cout << "NO\n";
			}
			else {
				cout << "YES\n";
			}
		}
	}

	return 0;
}