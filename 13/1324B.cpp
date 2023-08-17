#include<iostream>

using namespace std;

int main() {
	int t, n, c;
	cin >> t;
	while (t--) {
		c = 0;
		cin >> n;
		int *a = new int[n];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}

		for (int i = 0; i < n; i++) {
			int j = i + 2;
			for (; j < n; j++) {
				if (a[i] == a[j]) {
					c = 1;
					break;
				}
			}

		}

		if (c == 1) {
			cout << "YES\n";
		}
		else
			cout << "NO\n";

		delete[] a;
	}

	return 0;
}