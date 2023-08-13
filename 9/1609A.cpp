#include <iostream>
#include <algorithm>

using namespace std;

void solve() {
	int n;
	cin >> n;
	long long int* a = new long long int[n];
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	long long times = 0, ans = 0;
	for (int i = 0; i < n; ++i) {
		while (a[i] % 2 == 0) {
			++times;
			a[i] /= 2;
		}
	}
	sort(a, a + n);
	while (times--) {
		a[n - 1] *= 2;
	}
	for (int i = 0; i < n; ++i) {
		ans += a[i];
	}
	cout << ans << "\n";

	delete[] a;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}

	return 0;
}