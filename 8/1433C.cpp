#include <iostream>

using namespace std;

int main() {
	int t, n;
	cin >> t;
	while (t--) {
		cin >> n;
		int *a = new int[n];
		int m = 0, r = 0;

		for (int i = 0; i < n; i++) {
			cin >> a[i];
			m = max(m, a[i]);
		}

		for (int i = 0; i < n; i++) {
			if (a[i] == m && a[i] > a[i + 1] && i != n - 1) {
				r = i + 1;
				break;
			}
			else if (a[i] == m && a[i] > a[i - 1] && i != 0) {
				r = i + 1;
				break;
			}
		}
		if (r > 0) {
			cout << r << endl;
		}
		else {
			cout << "-1" << endl;
		}

		delete[] a;

	}

	return 0;
}