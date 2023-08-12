#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int *a = new int[n];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		int ans = 0;
		for (int i = n - 2; i >= 0; i--) {
			while (a[i] >= a[i + 1] and a[i] > 0) {
				a[i] = a[i] / 2;
				ans++;

			}
			if (a[i] == a[i + 1]) {
				ans = -1;
				break;
			}
		}
		cout << ans << endl;

		delete[] a;
	}

	return 0;
}