#include<iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int* a = new int[n];

		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}

		int m = 0;
		int b = 0;
		for (int i = 0; i < n; i++)
		{
			if (a[i] % 2 == 0) {
				m += a[i];
			}
			else {
				b += a[i];
			}
		}

		if (m > b) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}

		delete[] a;
	}

	return 0;
}