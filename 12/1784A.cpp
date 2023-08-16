#include <iostream>
#include <algorithm>

using namespace std;

void solve() {
	int n;
	cin >> n;
	int *a = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a + n);
	long long temp = 1, ans = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] >= temp) {
			ans += a[i] - temp;
			temp++;
		}
	}
	cout << ans << endl;

	delete[] a;
}

int main() {
	int n;
	cin >> n;
	while (n--) {
		solve();
	}

	return 0;
}